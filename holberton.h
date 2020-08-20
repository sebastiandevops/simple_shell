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
int freeNewpid(char *text);
void free_argv(char *argv[]);

#endif /* _HOLBERTON_H_ */
