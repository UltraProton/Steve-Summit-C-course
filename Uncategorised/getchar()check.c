#include<stdio.h>

int main(void){
	int c;

	//c=getchar();

	/*while(c!=EOF){
		putchar(c);
		c=getchar();
	}
	*/

	// Better way:

	while((c=getchar())!=EOF)
		putchar(c);

	return 0;
}