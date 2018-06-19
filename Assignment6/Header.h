#define linesize 5
#define maxwords 100

extern int ReadLine(char *,int);
extern char* mystrstr(char *, char *);
extern void checkBookBalance();
extern int getwords(char *, char **, int);
extern void hasWord();
extern int mystrcmp(char *, char *);
extern void strcpyptrs1(char *, char *);
extern void my_strcatptrs(char *, char *);

extern char* ReadLineDyn();

extern int ReadLineDynPointer(char **);

extern void sir_strcatptrs(char *, char *);

extern void strReverse(char *);

extern void PrintLines(char **, int);