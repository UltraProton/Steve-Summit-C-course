#include "Header.h"

void replace(char string[], char *from, char *to)
{
	int fromlen = strlen(from);
	int tolen = strlen(to);
	char *start, *p1, *p2;
	
    for(start = string; *start != '\0'; start++)
		{                   // line from 10 to 19 is strstr() in string library 
		p1 = from;
		p2 = start;
		while(*p1 != '\0')
			{
			if(*p1 != *p2)
				break;
			p1++;
			p2++;
			}
		if(*p1 == '\0')  //Check whether we have an occurrence of "from" in input
			{
			if(fromlen > tolen) 
				{
				/* move rest of string left */
				p2 = start + tolen;
				for(p1 = start + fromlen; *p1 != '\0'; p1++)
					*p2++ = *p1;
				*p2 = '\0';
				}
			else if(fromlen < tolen)
				{
				/* move rest of string right */
				int leftover = strlen(start);
				p2 = start + leftover + (tolen - fromlen);
				*p2-- = '\0';
				for(p1 = start + leftover - 1;
						p1 >= start + fromlen; p1--)
					*p2-- = *p1;
				}
			for(p1 = to; *p1 != '\0'; p1++)
				*start++ = *p1;
			//return;
			}
		}
}