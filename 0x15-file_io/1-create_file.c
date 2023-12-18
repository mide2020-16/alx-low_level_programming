#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file for writing and gives owner the
 * permission alone
 * @filename: the path to create the file
 * @text_content: the content to store
 * Return: 1 on Success
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_char;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		write_char = write(fd, text_content, strlen(text_content));
		close(fd);

		if (write_char == -1)
			return (-1);
	}
	else
	{
		return (-1);
	}

	return (1);
}