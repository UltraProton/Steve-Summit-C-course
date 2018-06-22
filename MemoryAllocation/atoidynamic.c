#include<stdlib.h>
#include "ex1header.h"
#include<stdio.h>

void atoidynamic(char *line){
	int n_alloc=100;
	int n_items=0;

	int *arr= malloc(n_alloc*sizeof(int)); // initial allocation

	if(!arr){  //If memory is not available for allocation then malloc returns NULL pointer (Not a pointer marker)

		printf("Insufficient Memory\n");
		exit(1);
	}

	while(ReadLine(line,linesize)!=EOF){ 
		
		if(n_items>=n_alloc){  // If no of items we have seen till now are more than we have allocated   
			n_alloc+=100;
			int *newarr= realloc(arr,n_alloc*sizeof(int)); 

			if(!newarr){ //If memory is not available then gracefully exit 

				printf("Insufficient Memory\n");
				exit(1);
		    }

		    arr=newarr; // Use the same old pointer further...so the value returned to newarr is assigned to arr
	   }

	   arr[n_items++]=atoi(line); // Store in arr at the current location the numeric value of the line
	}

	int i=0;

	while(i< n_items){
		printf("%d\n",arr[i] );
		i++;
	}

}

