#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int main (int argc, char *argv[])
{
        int file_from, cl1, cl2, writ, file_to,file_read,file_write;
        char *buff[1024];
        int tmp_file_from = open(argv[1], O_RDWR);
        size_t file_from_size = (size_t)lseek(tmp_file_from,0,SEEK_END);
        close(tmp_file_from);

        if (argc != 3)
        {
                dprintf(2, "Usage: cp file_from file_to\n");
                exit(97);
        }
	if (argv[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
        file_from = open(argv[1], O_RDONLY);
        if (file_from == -1)
        {
                dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
        }
	writ = write(file_from, "smth", 4);
	if (writ == -1)
		return (0);
        file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
        if (file_to == -1)
        {
                dprintf(2, "Error: Can't write to %s\n", argv[2]);
                exit(99);
        }
        while ((file_read = read(file_from,buff,file_from_size)) > 0)
        {
                if (file_read == -1)
                {
                        dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
                         exit(98);
                }
                file_write = write(file_to, buff, file_from_size);
                if (file_write == -1)
                {
                         dprintf(2, "Error: Can't write to %s\n", argv[2]);
                         exit(99);
                }
	}
	if (file_read == -1)
        {
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
        }
        cl1 = close(file_from);
        cl2 = close(file_to);
        if (cl1 == -1)
        {
                dprintf(2, "Error: Can't close fd %i\n", cl1);
                exit (100);
        }
        if (cl2 == -1)
        {
        dprintf(2, "Error: Can't close fd %i\n", cl2);
                exit (100);
        }
        return (0);
}
