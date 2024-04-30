// Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str.
// The terminating null character is considered to be part of the string. 
// Returns a pointer pointing to the last matching character, or null if no match was found.

#include <stdio.h>
#include <string.h>

char* my_strrchr(char* param_1, char param_2)
{
    char* result = NULL;

    while (*param_1 != '\0') {

        if(*param_1 == param_2){
            result = param_1;
        }
        
        param_1++;
    }
    
    return (char*)result;
}