#include "main.h"

/**
 * main - program that prints all arguments without using arc
 * @ac: argument count
 * @av: argument vectors
 * Return: returns 0 when successful
 */

int main(int ac __attribute__((unused)), char **av)
{
	if (av[1] == NULL)
		perror("Error: no arguments passed");
	write(STDOUT_FILENO, av, strlen(av));
	return (0);
}
