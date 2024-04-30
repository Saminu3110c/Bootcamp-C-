#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av){
    if(ac < 3){
        return 0;
    }
    int p1 = atoi(av[1]);
    int p2 = atoi(av[2]);
    for (int i = 1; i <= p1; i++){
        for (int j = 1; j <= p2; j++){
            if((i == 1 || i == p1) && (j == 1 || j == p2)){
                printf("o");
            } else if(i == 1 || i == p1){
                printf("-");
            } else if(j == 1 || j == p2){
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}