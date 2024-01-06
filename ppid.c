#include "main.h"

/**
 * main - a program that prints the PID of a parent process.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	pid_t myPpid;
	char pidString[20];

	myPpid = getppid();

	snprintf(pidString, sizeof(pidString), "%d", myPpid);

	write(STDOUT_FILENO, pidString, strlen(pidString));
	write(STDOUT_FILENO,"\n", 1);
	return (0);
}
