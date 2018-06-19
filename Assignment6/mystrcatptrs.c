#include "Header.h"
#include <string.h>
#include <stdlib.h>
#include<stdio.h>

void my_strcatptrs(char *str1, char *str2){
    int n_char= strlen(str1)+strlen(str2)+1; // +1 store the value of '\0'

    char *dest = malloc(sizeof(char)*(n_char)); 

    if(!dest){
        printf("Memory is not available");
        exit(1);
    }

    char *ptr=dest; // extra ptr to move through destination string

    strcpyptrs1(str1,ptr); // Remember strcpyptrs1() will copy whole string including null character

    ptr = ptr + strlen(str1); // Move ptr to point to location in dest where we have null character copied from previous call to strcpyptrs1()
    
    strcpyptrs1(str2,ptr); // start copying from there and it will also handle the case of copying null character at the last

    printf("%s",dest);

}

// Read the str1 and str2 in the function and use ReadLine() to calculate the no of characters read...

void sir_strcatptrs(char *str1, char *str2){
    int len1=ReadLine(str1,linesize);
    int len2=ReadLine(str2,linesize);

    if(len1==EOF || len2==EOF){
        exit(1);
    }

    char *dest= malloc(sizeof(char)*(len1+len2+1));

    if(!dest){
        printf("Insufficient Memory");
        exit(1);
    }

    char * ptr=dest;

    strcpyptrs1(str1,ptr);

    ptr= ptr + len1;

    strcpyptrs1(str2,ptr);

    printf("%s",dest);

}
