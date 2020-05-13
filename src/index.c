#include <stdio.h>
#include "SON.h"
int main() {
    char data[900000];
    printf("welcome to slitherDB graaphing tool! NOTE: please try to use the same datatype through your inputted document");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("please enter some SlitherDB data to visualise > ");
    scanf("%s", data);
    parse(data);
    
    return 0;
}
