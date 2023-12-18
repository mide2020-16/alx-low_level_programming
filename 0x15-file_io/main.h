#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif