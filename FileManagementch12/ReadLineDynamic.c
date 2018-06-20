/* Here we are allocating memory to read characters in ReadLineDyn() itself...this function lines of any length there is no restriction on the 
   size of line in terms of no of characters
*/   

#include <stdlib.h>
#include <stdio.h>
#include "Header.h"

char *ReadLineDyn(){
        int ch=0;
        int nch=0;
        int size =linesize;
    
    //Allocate space for line 
    char *line= malloc(sizeof(char)*linesize);

    //If space is not available then exit from the program
    if(!(line)){
        printf("Insufficient Memory");
        exit(1);
    }

    //Read character by character 
    while((ch=getchar())!=EOF && ch!='\n'){
        
        //If no of characater are more than or equal to the size of line then allocate 2 times the size of 
        //previous allocation  
        if(nch >= size){
            size = 2*size;
            char *newptr=realloc(line,sizeof(char)*size);

            if(!newptr){
                printf("Insufficient Memory");
                exit(1);
            }
            
           //assign new pointer to "line" so that we can use same pointer to store characters 
            else
            line=newptr;
        }

        line[nch++]=ch;
    }

    //If no characters are read in the line then free the memory allocated to it and return NULL
    if(nch==0 && ch == EOF){
        free(line);
        return NULL;
    }
       
     //Add NULL character at the end of line
     line[nch]='\0';
     
    // Return "line"(pointer to the first element of line we read)
     return line; 
}