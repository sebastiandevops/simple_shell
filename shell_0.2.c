#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - basic shell emulation.
 *
 *
 * Return: 0 on succes.
 */
int main(void)
{
	int bytes_read, i;
	size_t size;
	char *text, *s, *p;
	char *argv[] = {NULL, NULL, NULL, NULL};

	while (1)
	{
		printf("#cisfun$ ");
		text = (char *) malloc(size);
		bytes_read = getline(&text, &size, stdin);
		if (bytes_read == EOF)
			exit(0);
		if (bytes_read == -1)
			puts("ERROR!");
		if (text[bytes_read - 1] == '\n')
			text[bytes_read - 1] = 0;
		if (fork() == 0)
		{
			s = text;
			i = 0;
			do {
				p = strchr(s, ' ');
				if (p != NULL)
					p[0] = 0;
				argv[i] = s;
				s = p + 1;
				i++;
			} while (p != NULL);
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
			exit(0);
		}
		wait(NULL);
	}
	return (0);
}
