#include<stdio.h>
#include "ex1header.h"

int main(void){
	char str1[linesize];
	char str2[linesize];
	char str3[linesize];

	char *words[maxwords];
	int i=0;
	int n_words=0;

	ReadLine(str1,linesize);
	//ReadLine(str2,linesize);
    //ReadLine(str3,linesize);


	//n_words=getwords(str1,words,maxwords);

	//printf("%d\n",mystrlen(str1) );

/*	while(i<n_words){
		printf("%s\n",words[i]);
		i++;
	}
*/

	//sirdoublespaced();

	//printf("%d",countchar(str1,'a'));

	//replacebetter(str1,str2,str3); // wrong you cant change string literals in your code

	//printf("%s\n",str1);

	atoidynamic(str1);

	return 0;
}