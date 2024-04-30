// Create a my_upcase function that takes a string as a parameter 
// and returns the uppercase version of it.

#include <stdio.h>
char* my_upcase(char* param_1)
{
   char *result = param_1;
    while(*param_1 != '\0') {
        if (*param_1 >= 'a' && *param_1 <= 'z') {
            *param_1 = *param_1 - 32;
        }

        param_1++;
    }
    return result;
}