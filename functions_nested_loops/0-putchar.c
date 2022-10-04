#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

int main(void)
{
	char MyStr[] = "_putchar\n";
	int i;

	for (i = 0; i != '\0'; i++)
		_putchar(MyStr[i]);
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
