
void strcpyptrs(char *src, char *dest){
	while(*src !='\0'){
		*dest++= *src++;
	} 

	*dest='\0';
}