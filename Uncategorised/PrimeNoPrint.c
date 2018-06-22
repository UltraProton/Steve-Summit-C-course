
#include<stdio.h>

int PrintPrimes(int n){
	int i=0;
	if(n==2 || n==3)
		return 1;

	if(n%2==0 || n%3==0)
		return 0;

	for(i=5;i*i<=n;i+=6){
		if((n%i)==0 || (n%(i+2)==0))
			return 0;
	}

	return 1;
}


int main(void){
	int i;
	//scanf("%d",&n);
	
	for(i=2;i<=100;i++){
		if(PrintPrimes(i))
			printf("%d\n",i);
	}

	return 0;
}
