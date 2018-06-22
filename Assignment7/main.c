#include <stdio.h>
#include "Header.h"

int main(int argc, char const *argv[])
{
    //char *line= ReadLineDyn();

    //Squeezeleft(line,3);

    char line[linesize];
    char from[linesize];
    char to[linesize];

    printf("Enter line to replace text\n");
    ReadLine(line,linesize);

    printf("Enter text to replace in line\n");
    ReadLine(from,linesize);

    printf("Enter the replacement text\n");
    ReadLine(to,linesize);

  //  RightShift(line,5);

  //  ReplaceAwesome(line,from,to);

  //  replace(line,from,to);
      
      ReplaceAwesomeBetter(line,from,to);

    printf("%s\n",line);
    
    return 0;
}
