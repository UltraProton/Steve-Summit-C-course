/* Squeeze string to the left by a number of positions
e.g: 
Input- abcdedefgh 3
output -dedefgh
*/

#include <stdio.h>
#include <string.h>

void Squeezeleft(char *str,int pos){

    if(strlen(str) < pos){
        printf("Not enough characters present\n");
        return;
    }
    
    while(*str = *(str+pos))
           str++;
}

