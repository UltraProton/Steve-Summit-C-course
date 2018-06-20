/*Write a program to read its input, one character at a time, and print each character and its decimal value. */
 
#include<stdio.h>

int main(void){
	int c;

	
	while((c=getchar())!=EOF)
		/*printf("Decimal value:%d\n",c-'0');  Remember: c-'0' if c='a' will be (ascii value of 'a' - ascii value of '0')
		which is 97 -48 which is 49 but this is not what we want...we want the ascii value that is why we dont need to do 
		c-'0' 
		*/

		printf("Decimal value of %c : %d\n", c,c);

	    return 0;
}