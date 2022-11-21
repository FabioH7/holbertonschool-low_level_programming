#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, file_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	file_w = write(fd, text_content, strlen(text_content));
	if (file_w == -1)
		return (-1);
	close(fd);
	return (1);
}
