#include<stdio.h>

extern int ReadLine(char *, int);

int main(void){
	char line[256];

	while(ReadLine(line,256)!=EOF)
		printf("%s\n",line);

	return 0;
}