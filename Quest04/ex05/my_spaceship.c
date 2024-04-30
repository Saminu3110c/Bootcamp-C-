#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char* my_spaceship(char* param_1)
{
    int x = 0;
    int y = 0;
    char own[6] = "up";
    char *space[] = {"up", "right", "down", "left"};
    int i;

    for (i = 0; i < strlen(param_1); i++) {
        char path = param_1[i];

        if (path == 'R') {
            int index = -1;
            int j;
            for (j = 0; j < 4; j++) {
                if (strcmp(space[j], own) == 0) {
                    index = j;
                    break;
                }
            }
            if (index != -1) {
                index = (index + 1) % 4;
                strcpy(own, space[index]);
            }
        } else if (path == 'L') {
            int index = -1;
            int j;
            for (j = 0; j < 4; j++) {
                if (strcmp(space[j], own) == 0) {
                    index = j;
                    break;
                }
            }
            if (index != -1) {
                index = (index + 3) % 4;
                strcpy(own, space[index]);
            }
        } else if (path == 'A') {
            if (strcmp(own, "up") == 0) y--;
            else if (strcmp(own, "down") == 0) y++;
            else if (strcmp(own, "left") == 0) x--;
            else if (strcmp(own, "right") == 0) x++;
        }
    }
    char *buffer;
    buffer = (char*)malloc(50 * sizeof(char));
    sprintf(buffer, "{x: %d, y: %d, direction: '%s'}", x, y, own);
    return buffer;

    // The following will also work
    // // Allocate memory for the buffer
    // char *buffer = malloc(100 * sizeof(char));
    // // Check if memory allocation was successful
    // if (buffer != NULL) {
    //     // Format the result string using sprintf
    //     //sprintf(buffer, "{x: %d, y: %d, direction: %s}", x, y, own);
    //     // Format the result string using snprintf
    //     //snprintf(buffer, 100, "{x: %d, y: %d, direction: '%s'}", x, y, own);
    // } else {
    //     // Handle memory allocation failure
    //     printf("Memory allocation failed.\n");
    // }
    // // Return the result
    // return buffer;
    
    
}


 //Testing the code
// int main() {
//     char my_string0[] = "RAALALL"; // Example input
//     printf("%s\n", my_spaceship(my_string0));
//     char my_string1[] = "AAAA"; // Example input
//     printf("%s\n", my_spaceship(my_string1));
//     char my_string2[] = ""; // Example input
//     printf("%s\n", my_spaceship(my_string2));
//     char my_string3[] = "RAARA"; // Example input
//     printf("%s\n", my_spaceship(my_string3));
//     return 0;
// }