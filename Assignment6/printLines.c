#include <stdio.h>

void PrintLines(char **linepointers, int n_lines){
    int i=0;
    while(i< n_lines){
        printf("%s\n",linepointers[i]);
        i++;
    } 
}