#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sav1, sav2;
	char *buff;

	buff = malloc(letters);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	sav1 = read(fd, buff, letters);
	if (sav1 == -1)
		return (0);
	close(fd);
	sav2 = write(STDOUT_FILENO, buff, sav1);
	if (sav2 == -1)
		return (0);
	return (sav1);
}
