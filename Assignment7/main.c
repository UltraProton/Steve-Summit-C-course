#include <stdio.h>
#include "Header.h"

int main(int argc, char const *argv[])
{
    //char *line= ReadLineDyn();

    //Squeezeleft(line,3);

    char line[linesize];

    ReadLine(line,linesize);

    RightShift(line,5);

    printf("%s\n",line);
    
    return 0;
}
