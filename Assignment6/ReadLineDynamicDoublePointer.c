/* Try to pass a pointer to pointer to char to it and make changes in the variable passed as pointer to pointer to char

*/   
#include <stdlib.h>
#include <stdio.h>
#include "Header.h"

int ReadLineDynPointer(char **line){
        int ch=0;
        int nch=0;
//        int size =linesize;
        int n_alloc=10;

        //char *ptr= *line;

    //ptr= malloc(sizeof(char)*n_alloc);

    line=

    if(!(line)){
        printf("Insufficient Memory");
        exit(1);
    }


    while((ch=getchar())!=EOF && ch!='\n'){
        if(nch >= n_alloc){
            n_alloc=2*n_alloc;
            char *nptr=realloc(*line,sizeof(char)*n_alloc);

            if(!ptr){
                printf("Insufficient Memory");
                exit(1);
            }

            else
             ptr=nptr;
        }

        ptr[nch++]=ch;
    }

    if(nch==0 && ch == EOF){
        return EOF;
    }
       

     ptr[nch]='\0';

     return nch; 
}