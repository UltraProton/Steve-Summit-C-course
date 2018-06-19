#include<stdio.h>
#include <stdlib.h>

int randrange(int n);
int randrange2(int m, int n);

int main(){

   int i=1,m=5,n=12;

	for(i=1;i<=n;i++){
		printf("%d\n",randrange2(m,n));
	}
	
	return 0;

}

int randrange(int n){ // Returns random no's in the range of 1 to n
	return (rand()%n)+1;  // Adding one makes the range of no returned from 1 to n
}

int randrange2(int m, int n){  // Returns random no's in the range of m to n
	return (rand()%(n-m+1))+m;

}


// Key Point: rand() function generates random numbers 
// In unix we need to link math header file explicitly.
