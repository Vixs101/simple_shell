#include "main.h"

/**
 * main - a program that prints $ and wait for the user to enter
 * a command and prints the command.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	char *buffer;
	size_t bufsize = 0;

	write(STDOUT_FILENO, "$ ", 2);
	if (getline(&buffer, &bufsize, stdin) != -1)
	{
		write(STDOUT_FILENO, buffer, strlen(buffer));
	}

	write(STDOUT_FILENO, "$\n", 2);
	free(buffer);
	return (0);
}
