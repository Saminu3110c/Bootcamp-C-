// Let's create a function which will tell us if an array is sorted or not. What is sorted? :-)

// Write a function that takes an integer array as a parameter (input) and returns a boolean (true/false).

// Your function should return true if the integer array is sorted in either ASC(ascending) or description(descending) order.
// Your function should return false if the integer array is not sorted.

#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

bool my_is_sort(integer_array* param_1)
{
    int ascend = 1, descend = 1, i = 0;
    while ((ascend == 1 || descend == 1) && i < (param_1->size - 1)) {
        if (param_1->array[i] < param_1->array[i+1]) {
            descend = 0;
        }else if (param_1->array[i] > param_1->array[i+1]) {
            ascend = 0;
        }
        i++;
    }

    if (ascend == 1) {
        return true;
    }else if (descend == 1) {
        return true;
    }else {
        return false;
    }
}