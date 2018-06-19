#include "Header.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){

    char *line=NULL;

    printf("%d",ReadLineDynPointer(&line));

    printf("%s",line);

    return 0;
}