#include "main.h"

/**
 * main - test case 1
 *
 * Return: returns 0 on success
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	printf("Enter lines of text. Press Ctrl+D (or Ctrl+Z on Windows) to end:\n");
	while ((read = my_getline(&line, &len, 0)) != -1)
	{
		if (read == 0)
		{
			printf("Read %lu characters: %s", (unsigned long)read, line);
		}
		else
		{
			printf("Read %lu characters: %s", (unsigned long)read, line);
			printf("No more lines to read.\n");
			break;
		}
	}
	free(line);
	return (0);
}
