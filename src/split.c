#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void split(char string[9000], char splitter) {

    int i = 0;
    char side_1[9000];
    char side_2[9000];
    while (i < 9000) {
        char current_char = string[i];
        printf("\n%c", current_char);
        i++;
    }
}
