#include "main.h"
/**
 * append_text_to_file - A function that appends text at
 * the end of a file
 * @filename: That points to the name of the file
 * @text_content: The terminated sting to add to the end
 * of the file
 * Return: if text_content is NULL do not add anything to file
 * return 1 if file exists and -1 if does not or lack
 * required permission to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, area = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (area = 0; text_content[area];)
			area++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, area);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
