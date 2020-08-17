#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - basic shell emulation.
 *
 *
 * Return: 0 on succes.
 */
int main(void)
{
	int bytes_read;
	size_t size;
	char *text;
	char *argv[] = {NULL, NULL};

	while (1)
	{
		printf("#cisfun$ ");
		text = (char *) malloc(size);
		bytes_read = getline(&text, &size, stdin);
		if (bytes_read == -1)
		{
			puts("ERROR!");
		}
		if (text[bytes_read - 1] == '\n')
		{
			text[bytes_read - 1] = 0;
		}
		if (fork() == 0)
		{
			argv[0] = text;
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
			exit(0);
		}
		wait(NULL);
	}
	return (0);
}
