#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file to read
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file_r, file_w;
	char *txt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
		return (0);
	file_r = read(fd, txt, letters);
	if (file_r == -1)
		return (0);
	file_w = write(STDOUT_FILENO, txt, file_r);
	if (file_w == -1)
		return (0);
	close(fd);
	return (file_r);
}
