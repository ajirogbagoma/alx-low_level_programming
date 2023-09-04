#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_seeker(char *file);
void close_file(int fd);

/**
 * create_seeker - That assigns 1024 bytes for the seeker
 * @file: The storage of chars for the file name seeker
 * Return: That points to the assigned seeker
 */

char *create_seeker(char *file)
{
	char *seeker;

	seeker = malloc(sizeof(char) * 1024);

	if (seeker == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (seeker);
}

/**
 * close_file - That closes the file descriptors
 * @fd: The descriptor file to be closed
 */

void close_file(int fd)
{
	int r;

	r = close(fd);

	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A program that copies the content of a file
 * to another file
 * @argv: That points to the arrary of arguments
 * @argc: Number of arguments provided to the program
 * Return: 0 Success
 * Description: If argument count is incorrect - exit code 97
 * If file_form does not exist or cannot be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to or file_form cannot be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int from, to, a, b;
	char *seeker;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}

	seeker = create_seeker(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, seeker, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 066);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(seeker);
			exit(98);
		}

		b = write(to, seeker, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't wite to %s\n", argv[2]);
			free(seeker);
			exit(99);
		}

		a = read(from, seeker, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(seeker);
	close_file(from);
	close_file(to);

	return (0);
}
