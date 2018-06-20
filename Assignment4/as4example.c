#include <stdio.h>

int readline(char line [], int max){
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

int main()
{
	char word[20];
	int len;
	int i, j;

	printf("type something: ");
	len = readline(word, 20);

	for(i = 0; i < 80 - len; i++)
		{
		for(j = 0; j < i; j++)
			printf(" ");
		printf("%s\r", word);
		}
	printf("\n");
	
	return 0;
}