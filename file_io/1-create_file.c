
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - Creates a file with given content.
 * @filename: Name of the file.
 * @text_content: string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t content_len;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		content_len = 0;
	else
		content_len = strlen(text_content);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (write(fd, text_content, content_len) != content_len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
