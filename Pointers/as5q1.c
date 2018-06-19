#include<stdio.h>

void mydoublespaced(){
	int c;

	while((c=getchar())!=EOF){
		if (c=='\n')
		{
			//printf("\n\n"); It is correct but you can also do...
			putchar('\n');
			putchar('\n'); 

		}
		else
			putchar(c);
	}
}


void sirdoublespaced(){ // This looks more elegant...
	int c;

	while((c=getchar())!=EOF){
		putchar(c);
		if(c=='\n')
			putchar('\n');
	}
}