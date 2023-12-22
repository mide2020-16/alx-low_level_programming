#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * free_buffer - freeing buffer
 * @fd: file descriptor
 * @buffer: buffer to free
 * @value: value
 * Return: value
*/

int free_buffer(int fd, char *buffer, int value)
{
	free(buffer);
	close(fd);
	return (value);
}

/**
 * read_textfile - Reads the content in the filename and prints it on terminal
 * @filename: the path of the file
 * @letters: the number of lettera to print
 * Return: the number it was able to print to the screen
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_byte;
	ssize_t write_byte;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc((sizeof(char *) * letters) + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_byte = read(fd, buffer, letters);
	if (read_byte == -1)
		free_buffer(fd, buffer, 0);
	buffer[read_byte] = '\0';
	write_byte = write(STDOUT_FILENO, buffer, read_byte);
	if (write_byte == -1)
		free_buffer(fd, buffer, 0);
	free(buffer);
	close(fd);
	return (read_byte);
}
