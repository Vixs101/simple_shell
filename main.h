#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif /*MAIN_H*/
