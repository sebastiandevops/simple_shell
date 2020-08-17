#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - program that prints the address of env and environ.
 * @ac: argument counter.
 * @av: argument vector.
 * @env: environment.
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	extern char **environ;

	(void)ac;
	(void)av;
	printf("%s\n", *environ);
	printf("%s\n", &(**env));
	return (0);
}
