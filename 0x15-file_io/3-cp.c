#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/stat.h>

#define BUF_SIZE 1024

void print_error(int exit_code, const char *message, const char *arg)
{
	printf(message, arg);
	exit(exit_code);
}

int main (int argc, char **argv)
{
	const char *file_from;
	const char *file_to;
	int fd_from;
	int fd_to;
	char buffer[BUF_SIZE];
	ssize_t read_bytes, write_bytes;

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
		print_error(97, "Usage : cp file_from file_to\n", NULL);

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1 || file_from == NULL)
		print_error(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1 || file_from == NULL)
		print_error(99, "Error: Can't write to %s\n", file_to);


	read_bytes = read(fd_from, buffer, BUF_SIZE);

	if (read_bytes > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);

		if (write_bytes != read_bytes || write_bytes == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (read_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)

		print_error(100, "Error: Can't close fd %d", file_from);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd %d", file_to);

	return (0);
}


