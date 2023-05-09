#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * _error_check - checks for errors such as number arguments
 * @str: file names
 * @orig_file: integer
 * @cpy_file: integer
 * Return: nothing
 */
void _error_check(char **str, int orig_file, int cpy_file)
{
	if (orig_file == -1 || !str[1])
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", str[1]);
		exit(98);
	}
	if (cpy_file == -1 || str[2])
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", str[2]);
		exit(99);
	}
}
/**
 * main - copies the content of a file to another
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int orig_file, cpy_file, write_to_cpy, read_cont, close_file;
	char str[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	orig_file = open(argv[1], O_RDONLY);
	cpy_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_error_check(argv, orig_file, cpy_file);
	while ((read_cont = read(orig_file, str, 1024)))
	{
		if (read_cont == -1)
			_error_check(argv, read_cont, cpy_file);
		write_to_cpy = write(cpy_file, str, read_cont);
		if (write_to_cpy == -1)
			_error_check(argv, read_cont, write_to_cpy);
	}
	close_file = close(orig_file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", orig_file);
		exit(100);
	}
	close_file = close(cpy_file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cpy_file);
		exit(100);
	}
	return (0);
}

