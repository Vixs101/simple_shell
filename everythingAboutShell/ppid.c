#include "main.h"

/**
 * main - a program that prints the PID of a parent process.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	pid_t myPpid;

	myPpid = getppid();
	printf("%u\n", myPpid);
	return (0);
}
