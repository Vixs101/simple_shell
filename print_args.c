#include "main.h"

/**
 * main - program that prints all arguments without using arc
 * @ac: argument count
 * @av: argument vectors
 * Return: returns 0 when successful
 */

int main(int ac __attribute__((unused)), char **av)
{
	int i = 0;

	if (av[1] == NULL)
		perror("Error: no arguments passed");
	while (av[i] != NULL)
	{
		write(STDOUT_FILENO, av[i], strlen(av[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}
