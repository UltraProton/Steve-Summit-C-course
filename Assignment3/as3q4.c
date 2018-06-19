#include <stdio.h>

int printsquare(int);

int main()
{
	int i;
	for(i = 1; i <= 10; i = i + 1)
		{
		printsquare(i);
		printf("\n");
		}
	return 0;
}

int printsquare(int n)
{
	int i, j;
	for(i = 0; i < n; i = i + 1)
		{
		for(j = 0; j < n; j = j + 1){
			
			if((i==0) || (i==n-1))
			     printf("*");

		    else if(j==0 || (j==n-1))
		    	 printf("*");

		    else
		         printf(" ");	

		}

		printf("\n");
	}
	return 0;
}
