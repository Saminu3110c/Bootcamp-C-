// Create a function that displays a string of characters on the standard output.
// The address of the string's first character is in the pointer entered as
// parameter in the function.


#include <stdio.h>

void my_putstr(char* param_1)
{
    while(*param_1 != '\0'){
        putchar(*param_1);
        param_1++;
    }
}