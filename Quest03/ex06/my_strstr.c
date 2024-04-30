// Implement strStr().
// It should return a pointer to the first occurrence of a needle in a haystack, or NULL if the needle is not part of the haystack.

// Clarification:
// What should we return when needle is an empty string? This is a great question to ask during an interview.
// For the purpose of this problem, we will return haystack when needle is an empty string.

#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2)
{
    if (*param_2 == '\0') {
        return (char*)param_1;
    }
    char* param_1_ptr;
    char* param_2_ptr;
    while (*param_1 != '\0') {
        param_1_ptr = param_1;
        param_2_ptr = param_2;
        while (*param_2_ptr != '\0' && *param_1_ptr == *param_2_ptr) {
        param_1_ptr++;
        param_2_ptr++;
        }

        if (*param_2_ptr == '\0') {
            return (char*)param_1;
        }
        param_1++;
    }

    return NULL;
}