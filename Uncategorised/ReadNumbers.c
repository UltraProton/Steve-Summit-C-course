#include<stdio.h>
#include<stdlib.h>

#define linesize 250

int ReadLine(char line[],int max){
	int c,nch=0;
	max=max-1;

	while((c=getchar())!=EOF && c!='\n' && nch < max ){
		line[nch++]=c;
	}

	
	if(c==EOF && nch==0)   /*To handle the possibility that a few characters (i.e. the apparent beginning of a line) e.g "' ' ' '  EOF" are read, followed immediately by an EOF, without the usual \n end-of-line character.
	                      (That's why we return EOF only if we received EOF and we hadn't read any characters first.)	                      */
		return EOF;

	line[nch]='\0';

	return nch;
}


int main(void){
	char line[linesize];

	int number;
	float floatingnumber;
	double doubleNo;

	ReadLine(line,linesize);

	floatingnumber=atof(line);

	//doubleNo=atof(line);


	printf("%f\n",floatingnumber);

	//printf("%f\n",doubleNo);

	return 0;
}