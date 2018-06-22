/* Right shift the string by a no of positions
e.g - Input- abcdefgh 3
      Output-abcabcdefgh
*/      

#include "Header.h"

void RightShift(char *str, int pos){
    char *ptr1=str;

    while(*ptr1)
         ptr1++;

    char *ptr2=ptr1;

    ptr1=ptr2+pos;    

    while(ptr2 > str)
        *ptr1-- = *ptr2--;
        
}