#include <string.h>

void strReverse(char *str){
    char *l=str;
    char *r=str + strlen(str)-1;

    while(l<r){
        char temp=*l;
        *l++= *r;
        *r--= temp;
    }

    str[strlen(str)]='\0';
}

