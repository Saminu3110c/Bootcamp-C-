// Reproduce the behavior of the function strlen.
// The strlen() function computes the length of the string s.

// The strlen() function returns the number of characters.

#include <stdio.h>
int my_strlen(char* param_1)
{
    int len = 0;

    while(*param_1 != '\0'){
        len++;
        param_1++;
    }

    return len;
}

// int main() {
//   char str[] = "Hello, world!";
//   size_t len = my_strlen(str);
//   printf("The length of the string is: %zu\n", len);
//   return 0;
// }