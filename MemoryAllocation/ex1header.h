extern int ReadLine(char *, int);
extern int mystrcmpptrs(char *, char *);
extern int strcpyptrs(char *, char *);
extern int strcpyptrs1(char *, char *);
extern char * mystrstr(char *, char *);
extern int mystrlen(char *);
extern int getwords(char *, char **, int);
extern void mydoublespaced(void);
extern void sirdoublespaced(void);
extern int countchar(char *, char);
extern void atoidynamic(char *);
extern void replace(char *, char *, char *);

extern void replacebetter(char *, char *, char *);

#define linesize 100
#define maxwords 100