#include "Header.h"
#include<stdio.h>

void hasWord(){
    char line[linesize];
    char word[linesize];

    printf("Enter the word");

    ReadLine(word,linesize);

    while(ReadLine(line,linesize)!=EOF){
        if(mystrstr(line,word))
        printf("%s",line);
    }
}

