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
	write(STDOUT_FILENO, "\n", 1);
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
	exit(EXIT_SUCCESS);
}

/**
 * freeNewpid - frees NewPID.
 * @text: file to free.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int freeNewpid(char *text)
{
	write(STDOUT_FILENO, "\n", 1);
	free(text);
	exit(0);
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
