#include "main.h"

/**
 * main - a program that prints the pid of a process
 *
 * Return: return 0 on success
 */

int main(void)
{
	pid_t myPid;
	char pidString[20];

	myPid = getpid();

	snprintf(pidString, sizeof(pidString), "%d", myPid);

	write(STDOUT_FILENO, pidString, strlen(pidString));
	write(STDOUT_FILENO, "\n", 1);

	return (0);
}
