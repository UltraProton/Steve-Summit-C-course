#include<stdio.h>

/* Read one line from standard input, */
/* copying it to line array (but no more than max chars). */
/* Does not place terminating \n in line array. */
/* Returns line length, or 0 for empty line, or EOF for end-of-file. */

#define linesize 250

int ReadLine(char line[],int max){
	int c,nch=0;
	max=max-1; // To reserve space for '\0'

	while((c=getchar())!=EOF && c!='\n' && nch < max ){
		line[nch++]=c;
	}

	if(c==EOF && nch==0)   /*To handle the possibility that a few characters (i.e. the apparent beginning of a line) e.g "' ' ' '  EOF" are read, followed immediately by an EOF, without the usual \n end-of-line character.	                      (That's why we return EOF only if we received EOF and we hadn't read any characters first.)	                      */
		return EOF;

	line[nch]='\0';

	return nch;
}


/*int main(void){
	char line[linesize];

	while(ReadLine(line,linesize)!=EOF)
	     printf("\nYou typed: %s\n",line);

	return 0;

}
*/