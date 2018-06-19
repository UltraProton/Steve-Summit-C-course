#include <stdio.h>
#include "ex1header.h"


int main(void){
	char str1[linesize];
	char str2[linesize];

	char * str;

	ReadLine(str1,linesize);
	ReadLine(str2,linesize);

	//printf("%d",mystrcmpptrs(str1,str2));

	//strcpyptrs(&str1[0], &str2[0]); // Remember &str1[0] = str1

	//strcpyptrs1(str1,str2);

	str = mystrstr(str1,str2);

	printf("%s\n",str );

	return 0;
}
