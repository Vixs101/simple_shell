#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>

char *myStrtok(char *str, char delim)
ssize_t my_getline(char **lineptr, size_t *n, int fd);

#endif /*MAIN_H*/
