
int countchar(char *str, char ch){
	int count=0;
	while(*str){
		if(*str==ch)
		count++;
	
		str++;
	}

	return count;
}