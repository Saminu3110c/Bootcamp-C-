// Write a program that takes a string as an argument and returns it reversed.

// Your algorithm must be IN PLACE. (What is in place?)
// An in-place algorithm is an algorithm which transforms input using no auxiliary data structure.

#include <stdio.h>
#include <string.h>
char* reverse_string(char* param_1)
{
    for (int i = 0, j = strlen(param_1) - 1; i<= j; i++, j--) {
        char ch = param_1[i];
        param_1[i] = param_1[j];
        param_1[j] = ch;
    }

    return param_1;

}