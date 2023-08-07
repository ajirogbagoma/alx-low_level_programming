#include "main.h"
/**
 * create_file - A function that creates a file
 * @filename: That points to the created filename
 * @text_content: That points to the terminated to
 * write to the file
 * Return: If filename is NULL - 1,if text_content is NULL
 * then create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, area = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (area = 0; text_content[area];)
			area++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, area);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
