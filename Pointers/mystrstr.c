
#define NULL 0

char * mystrstr(char *ip, char *pat){
	char *start=ip;
	char *ptr2, *ptr3;

	while((*start)){  // Iterate over the input string
		ptr2=start;   // Take pointers to start and pat
		ptr3=pat;     

		while(*ptr3){  
			if(*ptr3 != *ptr2) // If value at ptr3 and ptr2 is not equal then start is not what we are looking for
				break;

			ptr3++;  
			ptr2++;
		}

		if(!(*ptr3))  //If we have iterated over pattern and ptr3 is NULL then start is our answer
			return start;

		start++; //Otherwise advance by one position in input string
	}

	return NULL;
}