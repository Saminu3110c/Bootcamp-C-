

char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    int index = 0;
    
    while (param_2[index] != '\0' && index < param_3) {
        param_1[index] = param_2[index];
        index++;
    }
    return param_1;
}