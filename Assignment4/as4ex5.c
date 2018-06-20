
/*Write a rudimentary checkbook balancing program. It will use getline to read a line, which will contain either the word 
"check" or "deposit". The next line will contain the amount of the check or deposit.After reading each pair of lines, the
program should compute and print the new balance. You can declare the variable to hold the running balance to be type float,
and you can use the function atof (also in the standard library) to convert an amount string read by getline into a 
floating-point number. When the program reaches end-of-file while reading "check" or "deposit", it should exit. 
(In outline, the program will be somewhat similar to the average-finding program.) 

For example, given the input
	deposit
	100
	check
	12.34
	check
	49.00
	deposit
	7.01
the program should print something like
	balance: 100.00
	balance: 87.66
	balance: 38.66
	balance: 45.67
*/


#include<stdio.h>
#include<stdlib.h>

#define linesize 256

extern int ReadLine(char *, int);

extern int mystrcmp(char *, char *);

int main(void){
	char line[linesize];
	int nch=0;
	double balance=0;
	int flag=1;

	while((nch=ReadLine(line,linesize))!=EOF){
		if(!mystrcmp(line,"deposit"))
			flag=1;
			
		else if(!mystrcmp(line,"check")) // we can pass string literals also in strcmp()
			      flag=-1;
		
		else{
			flag=0;
			printf("Incorrect input\n");
		}	
			ReadLine(line,linesize);
			
			balance=balance + atof(line)*flag;

		printf("Balance :%f\n",balance );
	}

	return 0;
}

