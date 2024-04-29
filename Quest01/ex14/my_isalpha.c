#include <ctype.h>
int my_isalpha(char param_1)
{
    if(isupper(param_1)){
        return 1;
    }else if(islower(param_1)){
        return 1;
    }else{
        return 0;
    }
}