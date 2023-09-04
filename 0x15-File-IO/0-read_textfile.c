#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - A function that reads a text file and prints
 * it to POSIX output
 * @letters: The number of letters to read and print out
 * @filename: That points to the file name
 * Return: If filename is NULL - 0,if write fails or does not
 * write expected amount of byte - 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *seeker;

	if (filename == NULL)
		return (0);

	seeker = malloc(sizeof(char) * letters);

	if (seeker == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, seeker, letters);
	c = write(STDOUT_FILENO, seeker, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(seeker);
		return (0);
	}

	free(seeker);
	close(a);

	return (b);
}
