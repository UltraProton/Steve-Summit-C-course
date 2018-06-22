#include<string.h>

void strcpyptrs1(char *dest, char *src){
	int len=strlen(src);  // strlen() returns length of string excluding the NULL character.

	char *ptr=&src[len+1];  // We can get the pointer to the location which is one away from the last element of array to use it in pointer comparisons
	                       // At 'len' we will have '\0' in the string
	
	char *ptr1;

	for(ptr1=src; ptr1 < ptr; ptr1++){  // Here we don't need to copy NULL character explicitly as we go till the NULL in this loop.
		*dest++ = *ptr1;  
	}
}