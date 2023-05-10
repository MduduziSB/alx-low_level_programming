#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * _error_check - checks for errors such as number arguments
 * @msg: error message
 * @str: file name
 * @ex_status: Exit status
 * Return: nothing
 */
void _error_check(const char *msg, char *str, size_t ex_status)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, str);
	exit(ex_status);
}
/**
 * main - copies the content of a file to another
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	const char *error_msg1 = "Error: Can't read from ";
	const char *error_msg2 = "Error: Can't write to ";
	size_t ex_status1 = 98, ex_status2 = 99;
	int orig_file, cpy_file, write_to_cpy, read_cont, close_file;
	char str[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	orig_file = open(argv[1], O_RDONLY);
	read_cont = read(orig_file, str, 1024);
	if (orig_file == -1 || read_cont == -1)
		_error_check(error_msg1, argv[1], ex_status1);
	cpy_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		write_to_cpy = write(cpy_file, str, read_cont);
		if (write_to_cpy == -1 || cpy_file == -1)
			_error_check(error_msg2, argv[2], ex_status2);
		read_cont = read(orig_file, str, 1024);
		if (orig_file == -1 || read_cont == -1)
			_error_check(error_msg1, argv[1], ex_status1);
		cpy_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_cont > 0);
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

