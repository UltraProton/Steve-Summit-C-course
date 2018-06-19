#include<stdio.h>
#include "Header.h"
#include <stdlib.h>

int main(void){
    //checkBookBalance();
    //hasWord();

    //char str1[linesize];
    //char str2[linesize];
    
    //ReadLine(str1,linesize);
    //ReadLine(str2,linesize);

    //sir_strcatptrs(str1,str2);

    //char *line=NULL;  //EXTRA CREDIT :Try to pass the addr of pointer to ReadLineDyn()

    //line=ReadLineDyn();

    //char *line =ReadLineDyn();

    //printf("%d",ReadLineDyn(line));

    //ReadLineDynPointer(&line);
    char *line;
    char **linePointers;
    int n_alloc=1;
    int n_items=0;
    
    //give memory to store pointers to line...
    linePointers= malloc(sizeof(char *)*n_alloc); 

    if(!linePointers){
        printf("Insufficient Memory");
        exit(1);
    }

   
    while((line=ReadLineDyn())!='\0'){
        //If no of items which are in use is more than or equal to the no of elements we have allocated to be stored
        //then increase the size of allocation 
        if(n_items>=n_alloc){
           n_alloc=2*n_alloc;

        char **newptr=realloc(linePointers,sizeof(char *)*n_alloc);

        if(!newptr){
            printf("Insufficient Memory");
            exit(1);
        }   
        
        linePointers=newptr;
       }

      linePointers[n_items++]=line;
    }

    int i=0;

//Reverse each string pointed by the pointers stored in "linepPointers"
    while(i < n_items){
        strReverse(linePointers[i]);
        i++;
    }

    //i=0;

/*    while(i < n_items){
        //strReverse(linePointers[i]);
        printf("%s",linePointers[i]);
        i++;
    }
*/   
    PrintLines(linePointers,n_items);

    return 0;
}