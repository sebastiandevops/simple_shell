#include "holberton.h"

/**
 * free_EOF - frees EOF.
 * @text: file to free.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int free_EOF(char *text)
{
	free(text);
	exit(0);
}

/**
 * free_textNULL - frees NULL.
 * @text: file to free.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int free_textNULL(char *text)
{
	free(text);
	exit(0);
}

/**
 * freeNewpid - frees NewPID.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void freeNewpid(void)
{
	perror("Error:");
	exit(-1);
}

/**
 * free_argv - frees NewPID.
 * @argv: file to free.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_argv(char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		free(argv[i]);
		++i;
	}
}


/**
 * create_argv - function that creates argv.
 * @s: string (user input).
 * @argv: argument vector.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void create_argv(char *s, char **argv)
{
	char *p;
	int i = 0;

	s[_strlen(s) - 1] = '\0';
	do {
		p = _strchr(s, ' ');
		if (p != NULL)
			p[0] = 0;
		argv[i] = s;
		s = p + 1;
		i++;
	} while (p != NULL);
}
