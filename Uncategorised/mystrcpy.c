#include <stdio.h>

void mystrcpy(char source[],char dest[]){
	int i=0;

	while(dest[i]=source[i])
		i++;
}

int main(void){
	char source[]="Hey there\\n";
	char dest[50];

	mystrcpy(source,dest);

	printf("%s\n",dest );

	return 0;
}