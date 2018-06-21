#define linesize 50
#define maxrows 10
#define maxcols 10

#include <stdio.h>
#include <stdlib.h>

extern char *ReadLineDyn();
extern void Squeezeleft(char *, int);
extern void RightShift(char*, int);
extern int ReadLine(char *, int);