#include "main.h"

/**
 * my_getline - a function similar to the standard library function.
 * @lineptr: pointer to a char pointer used to hold the address of the
 * buffer where the line will be stored
 * @n: a pointer to a size_t variable. it represents size of the buffer
 * pointed by lineptr.
 * @fd: file descriptor of the stream to read from
 * Return: on success, returns Number of characters read
 */

ssize_t my_getline(char **lineptr, size_t *n, int fd)
{
	size_t i = 0;
	size_t newSize;
	char *newBuffer;
	ssize_t bytesRead;

	if (lineptr == NULL || n == NULL || *n == 0)
	{
		*lineptr = (char *)malloc(128);

		if (*lineptr == NULL)
			return (-1);
		*n = 128;
	}

	while ((bytesRead = read(fd, *lineptr + i, 1) > 0))
	{
		if (i == (*n - 1))
		{
			newSize = *n * 2;
			newBuffer = realloc(*lineptr, newSize);

			if (newBuffer == NULL)
				return (-1);
			*lineptr = newBuffer;
			*n = newSize;
		}
		if ((*lineptr)[i] == '\n')
		{
			(*lineptr)[i] = '\0';
			return (i);
		}
		i++;
		if (bytesRead == 0 && i > 0)
		{
			(*lineptr)[i] = '\0';
			return (i);
		}
	}
	return (-1);
}
