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
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdnew = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (fdnew == -1)
	{
		dprintf(STDERR_FILENO, "EError: Can't write to %s\n", argv[2]);
		exit(99);
	}
	aux = 1024;
	while (aux == 1024)
	{
		aux = read(fd, buff, 1024);
		if (aux == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		aux2 = write(fdnew, buff, aux);
		if (aux2 == -1)
		{
			dprintf(STDERR_FILENO, "EError: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]), exit(100);
	if (close(fdnew) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]), exit(100);
	return (0);
}
