// Create a function that searches for the first occurrence of the character c (an unsigned char) in the string pointed
// to by the argument str. The terminating null character is considered to be part of the string. 
// The function should return a pointer pointing to the last matching character, or null if no match was found.
#include <stdio.h>


char* my_strchr(char* param_1, char param_2)
{ 
   while (*param_1 != param_2 && *param_1 != '\0') {
   param_1++;
   }
   if(*param_1 == param_2){
       return param_1;
   }else {
        return NULL;
   }

}