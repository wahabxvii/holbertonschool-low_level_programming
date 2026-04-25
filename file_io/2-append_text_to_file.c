
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: string to add at the end.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t content_len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		content_len = 0;
	else
		content_len = strlen(text_content);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (content_len > 0)
	{
		if (write(fd, text_content, content_len) != content_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
