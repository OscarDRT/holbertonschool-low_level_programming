#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @argc: Number of arguments
 * @argv: pointer to arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, fdnew, aux, aux2 = 0;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fdnew = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fdnew == -1)
	{
		dprintf(STDERR_FILENO, "EError: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	aux = 1024;
	while (aux == 1024)
	{
		aux = read(fd, buff, 1024);
		if (aux == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
			exit(98);
		}
		aux2 = write(fdnew, buff, aux);
		if (aux2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
	}
	fd = close(fd);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n"), exit(100);
	fdnew = close(fdnew);
	if (fdnew == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n"), exit(100);
	return (0);
}
