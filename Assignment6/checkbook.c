/*Rewrite the checkbook-balancing program from assignment 4 (exercise 6) to use the getwords function (from the notes)
 to make it easy to take the word ``check'' or ``deposit'', and the amount, from a single line.
*/

#include "Header.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void checkBookBalance(){
    char line[linesize];
    char *words[maxwords];
    int sign=1;
    float balance=0;

    
    while(ReadLine(line,linesize)!=EOF){  
         getwords(line,words,maxwords); //Break Line into words and store pointer to each word in "words" array

         if(!mystrcmp(words[0],"Deposit") || !mystrcmp(words[0],"deposit")) //Compare the first string stored in words[0]
            sign=1; // change sign of what we are going to add to the balance

        else if(!mystrcmp(words[0],"Check") || !mystrcmp(words[0],"check"))
            sign=-1;    

        else
            printf("Incorrect Input\n");    
            return;

        balance=balance + sign*(atof(words[1]));

        printf("balance:%f\n",balance);
    }
         
}

