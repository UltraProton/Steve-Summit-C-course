#include<stdio.h>
#include <string.h>

#define linesize 100

extern int ReadLine(char *, int);

void ReverseString(char *str){
	int i=0;
	int j=strlen(str)-1;

	while(i<j){
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;

		i++;
		j--;
	}

}

void ReverseStringPtrs(char *str){
	char *l=str;
	char *r=&str[strlen(str)-1];

	while(l<r){
		char temp=*l;
		*l=*r;
		*r=temp;

		l++;
		r--;

		/* Another way:
		 char temp=*l;
		 *l++ = *r;
		 *r-- = temp;

		*/ 
	}
}


int main(void){
	char line[linesize];

	printf("Enter line :\n");
	ReadLine(line,linesize);

	ReverseStringPtrs(line);

	printf("%s\n",line);
}