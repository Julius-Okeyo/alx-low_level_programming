#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: NULL terminator byte
 * Return: 1 (Success) else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;
	char *emp = "";

	len = strlen(text_content);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = emp;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);
	return (1);
}
