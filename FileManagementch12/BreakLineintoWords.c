
#include <ctype.h>

int getwords(char *line, char *words[], int maxwords){
	char *p=line;
	int n_words=0;

	while(1){
		while(isspace(*p)) // Skip leading spaces if any
			p++;

		if(!(*p))
			return n_words; // If we reach end of line then return no of words we have seen till now

		words[n_words++]=p++; // Store the address of first character of the word and increment no of words seen and advance 1 character

		while(!isspace(*p) && *p!='\0') // Keep moving until we are looking at non-space characters of the same word
			p++;

		if(*p=='\0')   // If we have reached the end of line then return no of words seen so far...
			return n_words;

		if (isspace(*p))  // "if" is not required here we can without testing for space say *p++='\0' 
		{
			*p++='\0';
		}

		if(n_words>=maxwords)
			return n_words;
	}

}

// time -> O(n)