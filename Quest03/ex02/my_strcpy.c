// Reproduce the behavior of the function strcpy.
// The strcpy() and strncpy() functions copy the string source (src) to destination (dst).

// The first parameter is the destination and the second parameter is the source.
// The strcpy() and strncpy() functions return destination.
#include <stdio.h>

char* my_strcpy(char* param_1, char* param_2)
{
    int index = 0;
    
    while (param_2[index] != '\0') {
        param_1[index] = param_2[index];
        index++;
    }
    return param_1;
}



// int main() {
//   char dst[100] = {0};
//   char *src     = "Hello";
  
//   printf("my_strcpy -> %s\n", my_strcpy(dst, src));
//   return 0;
// }