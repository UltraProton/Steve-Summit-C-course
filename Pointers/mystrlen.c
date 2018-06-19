
int mystrlen(char *str){
	char *ptr;

	for(ptr=str; *ptr !='\0'; ptr++)
		;

	return ptr-str; // ptr= str + length(str)
}

