/*
 strcmp() returns positive no if str1 is greater than str2 negative no if str1 is less than str2 and o if they are equal.

 Key point : It returns 0 if the are equal...
*/
int mystrcmpptrs(char *str1, char *str2){

	while(1){
		if(*str1 != *str2)
			return (*str1) - (*str2);  

		else if(*str1=='\0' && *str2=='\0')
			return 0;

			str1++;
		    str2++;
	}
}

