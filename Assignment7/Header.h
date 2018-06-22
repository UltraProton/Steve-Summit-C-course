#define linesize 100
#define maxrows 10
#define maxcols 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char *ReadLineDyn();
extern void Squeezeleft(char *, int);
extern void RightShift(char*, int);
extern int ReadLine(char *, int);
extern char* mystrstr(char *, char *);
extern void strcpyhelper(char*, char*);
extern void ReplaceAwesome(char*, char*, char*);
extern int mod(int);
extern void replace(char*, char*, char*);
extern void ReplaceAwesomeBetter(char*, char*, char*);