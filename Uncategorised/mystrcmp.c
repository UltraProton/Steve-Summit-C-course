#include<stdio.h>
/* The standard library's strcmp function compares two strings, and returns 0 
if they are identical, or a negative number if the first string is alphabetically ``less than'' the second string,
 or a positive number if the first string is ``greater.'' (Roughly speaking, what it means for one string to be 
 ``less than'' another is that it would come first in a dictionary or telephone book, although there are a few anomalies.)
*/
int mystrcmp(char str1[],char str2[]){
	int i=0;
	while(1){
		if(str1[i]!=str2[i])
			return str1[i]-str2[i];

		if(str1[i]=='\0' && str2[i]=='\0')
			return 0;

		i++;
	}
}

/*
int main(void){

	char str1[]="Adityk";

	char str2[]="Aditylakdjfalds";

	printf("%d\n",mystrcmp(str1,str2));

	return 0;

}

*/