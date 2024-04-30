// Create a function my_range which returns a malloc'd array of integers. This integer array should contain all values between min and max.

// Min included - max excluded.

// If min value is greater or equal to max's value, a null pointer should be returned.

// Don't worry about "free", it will be done in our main().

#include <stdio.h>
#include <stdlib.h>
int* my_range(int param_1, int param_2)
{
    // Handle invalid input
   if (param_1 > param_2) {
       return NULL;
   }

   // Calculate array size
   int size = param_2 - param_1 + 1;

   // Allocate memory for the array
   int *my_range = malloc(size * sizeof(int));
   if (my_range == NULL) {
       // Allocation failed
       return NULL;
   }

   // Fill the array with values
   for (int i = 0; i < size; i++) {
       my_range[i] = param_1 + i;
   }

   return my_range;

}
