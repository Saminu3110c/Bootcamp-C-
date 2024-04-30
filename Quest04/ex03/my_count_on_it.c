// Count the size of each elements in an array.

// Create a function my_count_on_it that receives a string array as a parameter
// and returns an array with the length of each string.

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

integer_array* my_count_on_it(string_array* param_1)
{
    integer_array* int_array = (integer_array*)malloc(sizeof(integer_array));
    if(int_array == NULL){
        return NULL;
    }
    
   int_array->size = param_1->size;

   int_array->array = (int*)malloc(sizeof(int) * param_1->size);

   if (int_array->array == NULL) {
       free(int_array);
   }
    
    for(int i = 0; i < param_1->size; i++){
        int stringSize = 0;
        for(char* p = param_1->array[i]; *p != '\0'; p++){
            stringSize++;
        }
        int_array->array[i] = stringSize;

    }

    return int_array;
}