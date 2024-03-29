#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * _strlen - computes the string's length
 * @str: string
 * Return: string length
 */
int _strlen(char *str)
{
	int strlen = 0;

	while (str[strlen])
		strlen++;
	return (strlen);
}
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string
 * Return: 1 success -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fcreate, fwrite, strlen;

	if (!filename)
		return (-1);
	fcreate = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fcreate == -1)
		return (-1);
	if (text_content)
	{
		strlen = _strlen(text_content);
		fwrite = write(fcreate, text_content, strlen);
		if (fwrite == -1)
			return (-1);
	}
	close(fcreate);
	return (1);
}

