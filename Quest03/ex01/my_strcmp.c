// Reproduce the behavior of the function strcmp.
// The strcmp() function compares string1 with string2 to see if there are equals.

// Tip
// Return value is connected to ASCII values ;-)
#include <stdio.h>
#include <string.h>

int my_strcmp(char* param_1, char* param_2)
{
    while(*param_1 && *param_1 == *param_2) {
        ++param_1;
        ++param_2;
    }
    return (int)(unsigned char)(*param_1)- (int)(unsigned char)(*param_2);

}
