// Create a function that combines an array of strings from separator characters.

// ["Hello", "World", "!"] && ' '
// => "Hello World !"
// You will receive two parameters, an array with all the strings and a separator.

// The function should return a string where all the strings from the array are joined with the separator.

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

char* my_join(string_array* param_1, char* param_2)
{
     int i = 1;
    if(param_1->size == 0){
        return NULL;
    }
    char *strings = realloc(NULL, strlen(param_1->array[0])+1);
    strcpy(strings, param_1->array[0]);

    
    while(param_1->array[i] != NULL) {
        strings = (char*)realloc(strings, strlen(strings) + strlen(param_1->array[i]) + strlen(param_2) + 1);
        strcat(strings, param_2);
        strcat(strings, param_1->array[i]);
        i++;
    }
    return strings;

}