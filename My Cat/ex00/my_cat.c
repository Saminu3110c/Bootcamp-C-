// Description
// It's your turn to code the software cat!

// Create a program called my_cat which does the same thing as the system's cat command used in the command-line.

// Your program should read the content of each files which are received as an argument to your software.
// Unlike the real Cat command, you don't have to handle any options. :-)

// [[examples]]
// language = "Javascript"

// $>node my_cat file1
// content_file_1
// content_file_2
// $>


// Example Python

// $>python my_cat file1 file2
// content_file_1
// content_file_2
// $>


// Example Ruby

// $>ruby my_cat file1 file2
// content_file_1
// content_file_2
// $>


// Example java

// $>java my_cat file1 file2
// content_file_1
// content_file_2
// $>


// Example Rust <3

// $>./my_cat file1 file2
// content_file_1
// content_file_2
// $>


#include <stdio.h>
#define BUFFER_SIZE 1024
int main(int argc, char *argv[]) {
    // Check if the user has provided filenames as arguments
    if (argc < 2) {
        printf("Usage: %s <file1> <file2> ... <fileN>\n", argv[0]);
        return 1;
    }

    // Buffer to store read content from file
    char buffer[BUFFER_SIZE];

    // Loop through each filename provided as argument
    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "r"); // Open file for reading
        if (file == NULL) {
            printf("Error: Unable to open file '%s'\n", argv[i]);
            return 1;
        }

        // Read content of the file in chunks and print
        size_t bytes_read;
        while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, file)) > 0) {
            fwrite(buffer, 1, bytes_read, stdout);
        }

        fclose(file); // Close the file
    }

    return 0;
}