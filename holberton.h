#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

int free_EOF(char *text);
int free_textNULL(char *text);
void freeNewpid(void);
void free_argv(char *argv[]);
int _strcmp(char *s1, char *s2);
char *_strncat(char *dest, char *src, int n);
int _strlen(char *s);
char *_strchr(char *s, char c);
void create_argv(char *s, char **argv);
void print_number(int n);
int _putchar(char c);
void print_terror(char **argv, char *process, int cuenta, char *text);
void superFree(char *text, char **argv);

#endif /* _HOLBERTON_H_ */
