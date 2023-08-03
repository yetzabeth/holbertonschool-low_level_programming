#include "main.h"
/**
 * closing - close function
 * @n: as a file handler
 * Return: int
 */
void closing(int n)
{
	int v = 0;

	v = close(n);
	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
}

/**
 * main - copy a file to another
 * @argc: source file
 * @argv: destine file
 * Return: int
 */
int main(int argc, char *argv[])
{
	static char buffer[1024];
	int sd = 0, sf = 0, s = 1024, d = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	sf = open(argv[1], O_RDONLY);
	if (sf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	sd = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (sd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (s == 1024)
	{
		s = read(sf, buffer, 1024);
		if (s == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		d = write(sd, buffer, s);
		if (d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closing(sf);
	closing(sd);
	return (0);
}
