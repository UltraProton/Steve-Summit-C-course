/* Replace the occurrence of a string to another string in the given input.
e.g:Input 1 : str: Hey there how are\\ ?you?
              from: e
              to : XX
    Output 1: HXXy thXXrXX how arXX\\ ?you?

    Input2:   str: Hey there how are thereyou there\\ ?
              from: here
              to: yy         
    Output2:  Hey tyy how are tyyyou tyy\\ ?

*/    

#include "Header.h"

void ReplaceAwesome(char *str, char *from, char *to){
    int len1=strlen(from);
    int len2=strlen(to);
    int pos= len1-len2; //difference between the lengths of from and to


    while(1){
        char *ptr=mystrstr(str,from);  //Find the occurrence of "from" in input string str
        
        if(!ptr){  //If there is no "from" in input then simply return 
            return;
        }

        if(pos > 0){ 
            //If length of "from" is bigger than the "to" then the input string needs to be squeezed to the left by difference of their lengths
            Squeezeleft(ptr+1,pos);
        }
        
        else if(pos < 0){
            //If length of "from" is lesser than the "to" then the input string needs to be expand to the right to accomodate the extra characters from to
            pos=-1*pos; // we need positive value for the position
            RightShift(ptr+1,pos);
        }
           
       strcpyhelper(ptr,to); // copy "to" to input starting from first occurrence of "from" in input string

       str=ptr+len2; //Move str to inspect the rest of the string
    }
}



//This function is going to use string library function void *memmove(const void *, const void *, size_t num)
/* Note: 1. "const void *ptr" is pointer to constant
         2. "void *const ptr" is constant pointer to variable
*/

void ReplaceAwesomeBetter(char *str, char *from, char *to){
    int from_len=strlen(from);
    int to_len= strlen(to);

    while(1){
        char *ptr= mystrstr(str,from);

        if(!ptr)
           return;

        if(from_len != to_len)
           //If lengths are not equal then adjust the input string (squeeze or expand) can be gracefully done using memmove()
           //This line will adjust itself beautifully copying the part of the string to its relevant positions...please see how on paper 
           memmove((ptr+to_len),(ptr+from_len),strlen(ptr+from_len)+1); // here in last argument 1 is added to copy the NULL character as well

              strcpyhelper(ptr,to);   //Copy "to" to the ptr to replace the text

        str=ptr+ to_len;

    }
}







