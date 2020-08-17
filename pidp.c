#include <stdio.h>
#include <unistd.h>

/**
 * main - program that prints the PID of the parent process.
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getppid();
	printf("%u\n", my_pid);
	return (0);
}
