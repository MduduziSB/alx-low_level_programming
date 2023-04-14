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
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: string
 * Return: 1 success -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, fappend, strlen;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content)
	{
		strlen = _strlen(text_content);
		fappend = write(fp, text_content, strlen);
		if (fappend == -1)
			return (-1);
	}
	close(fp);
	return (1);
}

