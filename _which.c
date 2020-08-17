#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - program that looks for files in the current PATH.
 * @ac: argument counter.
 * @av: argument vector.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *dup, *s, *p, *j;
	struct stat st;
	int i;

	(void)ac;
	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}
	i = 1;
	while (av[i])
	{
		dup = strdup(getenv("PATH"));
		s = dup;
		p = NULL;
		do {
			p = strchr(s, ':');
			if (p != NULL)
				p[0] = 0;
			j = strdup(s);
			strcat(j, "/");
			strcat(j, av[i]);
			if (stat(j, &st) == 0)
			{
				printf("%s\n", j);
				break;
			}
			s = p + 1;
		} while (p != NULL);
		free(dup);
		i++;
	}
	return (0);
}
