#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @argc: Number of arguments
 * @argv: pointer to arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_O, fd_D, aux;
	char buff[1024];
	int per = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);
	fd_O = open(argv[1], O_RDONLY);
	if (fd_O == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_D = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, per);
	if (fd_D == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((aux = read(fd_O, buff, 1024)) > 0)
	{
		if (write(fd_D, buff, aux) != aux)
		{
			dprintf(STDERR_FILENO, "EError: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if ((close(fd_O) == -1) || (close(fd_D) == -1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]), exit(100);
	return (0);
}
