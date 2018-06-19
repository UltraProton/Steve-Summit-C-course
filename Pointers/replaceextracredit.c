/*
Write the function
	replace(char string[], char from[], char to[])
which finds the string from in the string string and replaces it with the string to. You may assume that from and to are the same length. For example, the code
	char string[] = "recieve";
	replace(string, "ie", "ei");
should change string to "receive". 

Extra credit: Think about what replace() should do if the from string appears multiple times in the input string.
*/

#include "ex1header.h"

void replacebetter(char *ip, char *from, char *to){
	
	while(1){

    	char *p1= mystrstr(ip,from); //Find the occurrence of "from" in "ip"(input) 

    	if(!p1)      // If "from" is not present in "ip" then do nothing   
    		return;

    	char *p2=to; // Pointer to iterate over "to"

    	while(*p2)  // while p2 is "not null" copy in location pointed by p1 what is in location pointed by p2 and move ahead by one also
    		*p1++=*p2++;

	     ip=p1;  // Imp: Move ip(pointer) to p1 to look for "from" in the rest of the string from "ip" to end of "ip"
	}
}

