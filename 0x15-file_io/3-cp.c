#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @ac: Number of arguments
 * @av: pointer to arguments
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int fd_O, fd_D, aux;
	char buff[1024];
	mode_t per = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_O = open(av[1], O_RDONLY);
	if (fd_O == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_D = open(av[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, per);
	if (fd_D == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((aux = read(fd_O, buff, 1024)) > 0)
	{
		if (write(fd_D, buff, aux) != aux)
		{
			dprintf(STDERR_FILENO, "EError: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (aux == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if ((close(fd_O) == -1) || (close(fd_D) == -1))
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_O), exit(100);
		return (0);
}
