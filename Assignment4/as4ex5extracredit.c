/*
Assignment 4 ques 5 ...
Extra credit: Think about how you might have the program take the word "check" or "deposit", and the amount, from a 
single line (separated by whitespace).

*/

#include<stdio.h>
#include<stdlib.h>

#define linesize 256

extern int ReadLine(char *, int);

extern int mystrcmp(char *, char *);

void strcopyhelper(char dest[], char src[], int index){ //Copy in dest from src starting at index...
	int j=0;
	while(src[index]){
		dest[j++]= src[index++];
	}

	dest[j]='\0';  // Dont forget to add this in every string you create in C
}

int main(void){
	char line[linesize];
	char tempstr1[linesize];  // Storing the word (check or deposit)
	char tempstr2[linesize]; //  Storing the numeric part of line
 	int nch=0; // No of characters          
	int flag=1;
	double balance=0;

	while((nch=ReadLine(line,linesize))!=EOF){
		
		int i=0;
		while(line[i]!=' '){      // To read the first word...if there are leading spaces in the input "line" then this code will not work
			tempstr1[i]= line[i];
			i++;
		}

		tempstr1[i]='\0';  // Always add NULL character whenever creating a new string

		if(!mystrcmp("deposit",tempstr1)) // Deposit -> add 
			flag =1;

		else if(!mystrcmp(tempstr1,"check")) // Check -> Subtract 
			flag=-1;

		else{
			printf("Incorrect input\n");
			flag=0;
		}
			

		i++;  // Skip the space

		strcopyhelper(tempstr2,line,i); // Copy numeric part in tempstr2 so that atof can be called easily.

		balance=balance + atof(tempstr2)*flag;

		printf("Balance :%f\n",balance );
	}

	return 0;
}

