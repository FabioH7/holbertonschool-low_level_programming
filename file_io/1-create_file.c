#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, file_w;
	char *txt;

	if (filename == NULL)
		return (-1);
	if (text_content  == NULL)
	{
		fd = creat(filename, 0600);
		return (1);
	}
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	txt = malloc(sizeof(char) * strlen(text_content));
	if (txt == NULL)
		return (-1);
	file_w = write(fd, text_content, strlen(text_content));
	if (file_w == -1)
		return (-1);
	close(fd);
	return (1);
}
