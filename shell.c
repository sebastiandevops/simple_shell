#include "holberton.h"
/**
 * main - basic shell emulation.
 *
 *
 * Return: 0 on succes.
 */
int main(void)
{
	int bytes_read, status;
	size_t size = 0;
	char *text = 0, *argv[] = {NULL, NULL}, *prompt = "\n$ ";
	pid_t newpid;
	struct stat fStat;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, prompt, 3);
	while ((bytes_read = getline(&text, &size, stdin)))
	{
		if (bytes_read == EOF)
			free_EOF(text);
		if (text == NULL)
			free_textNULL(text);
		if (text[bytes_read - 1] == '\n')
			text[bytes_read - 1] = 0;
		newpid = fork();
		if (newpid == -1)
			freeNewpid(text);
		if (newpid == 0)
		{
			argv[0] = text;
			if (stat(argv[0], &fStat) == 0)
				execve(argv[0], argv, NULL);
			else
				perror("Error");
		}
		else
			wait(&status);
		bytes_read = 0;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, 3);
	}
	if (bytes_read == -1)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
