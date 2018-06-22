#include <stdio.h>

int main(void){
	int i,x=1;
	for(i=1;i<=7;i++){
		x=x*i;
		printf("Factorial of %d is %d\n",i,x);
	}
	return 0;
}