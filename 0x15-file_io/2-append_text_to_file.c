#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Appends a text to a created file
 * @filename: the path of the file
 * @text_content: the text to append
 * Return: Success
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t append_text;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		append_text = write(fd, text_content, strlen(text_content));
		if (append_text == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}
