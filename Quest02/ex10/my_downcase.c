// Create a my_downcase function that takes a string as a parameter
// and returns the lowercase version of it.

char* my_downcase(char* param_1)
{
    // Manipulating the code from my_upper() function
    char *result = param_1;
    while(*param_1 != '\0') {
        if (*param_1 >= 'A' && *param_1 <= 'Z') {
            *param_1 = *param_1 + 32;
        }

        param_1++;
    }
    return result;

}