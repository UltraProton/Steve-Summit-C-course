/*Write the function
	replace(char string[], char from[], char to[])
which finds the string from in the string string and replaces it with the string to. You may assume that from and to are the same length. For example, the code
	char string[] = "recieve";
	replace(string, "ie", "ei");
should change string to "receive". 

*/

#include "ex1header.h"

void replace(char *ip, char *from, char *to){

	char *p= mystrstr(ip,from);

	while(*to){
		*p++=*to++; // Copy in location pointed by p from location pointed by to and increment p and to also
	}
}




