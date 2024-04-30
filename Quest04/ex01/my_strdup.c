// Let's allocate a string (or array of characters).

// We have the string: "abc" and we want a copy in a new part of memory that you will have to malloc.

// (Reproduce the behavior of strdup from man strdup)
  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* my_strdup(char* param_1)
{
    
  size_t len = strlen(param_1) + 1;

  // Allocate memory for the duplicated string
  char* dup_str = malloc(len * sizeof(char));
  if (dup_str == NULL) {
    return NULL; 
  }

  memcpy(dup_str, param_1, len);

  return dup_str;

}