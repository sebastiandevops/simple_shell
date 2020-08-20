#include "holberton.h"
/**
 * main - basic shell emulation.
 * @ac: argument counter.
 * @av: argument vector.
 * Return: 0 on succes.
 */
int main(int ac, char **av)
{
	int bytes_read, status, cuenta = 0;
	size_t size = 0;
	char *text = 0, *prompt = "$ ", *argv[] = {NULL, NULL, NULL, NULL};
	pid_t newpid;
	struct stat fStat;
	(void)ac;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, prompt, 2);
	while ((bytes_read = getline(&text, &size, stdin)))
	{
		if (bytes_read == EOF)
			free_EOF(text);
		if (text == NULL)
			free_textNULL(text);
		cuenta++;
		create_argv(text, argv);
		newpid = fork();
		if (newpid == -1)
			freeNewpid();
		if (newpid == 0)
		{
			if (stat(argv[0], &fStat) == 0)
			{
				execve(argv[0], argv, NULL);
				free(text);
			}
			else
				print_terror(argv, av[0], cuenta, text);
		}
		else
			wait(&status);
		bytes_read = 0;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, 2);
	}
	if (bytes_read == -1)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
