// Create a my_string_formatting function which takes 3 parameters (firstname, lastname and age) and prints a string composed value.

// Formatting should be: "Hello, my name is FIRSTNAME LASTNAME, I'm AGE."


#include <stdio.h>
void my_string_formatting(char* firstname, char* lastname, int age)
{
    printf("Hello, my name is %s %s, I\'m %d.\n", firstname, lastname, age);
}