#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#define PERMS 0664
#define MAX_SIZE 1024
/**
 * _error_check - checks for errors suchs number arguments
 * @str: file names
 * @arg: number of arguments
 * @orig_file: integer
 * @cpy_file: integer
 * Return: nothing
 */
void _error_check(char **str, int arg, int orig_file, int cpy_file)
{
	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	if (orig_file == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", str[1]);
		exit(98);
	}
	if (cpy_file == -1)
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
	char str[MAX_SIZE];

	orig_file = open(argv[1], O_RDONLY);
	cpy_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, PERMS);
	_error_check(argv, argc, orig_file, cpy_file);
	while ((read_cont = read(orig_file, str, MAX_SIZE)) == MAX_SIZE)
	{
		_error_check(argv, argc, read_cont, cpy_file);
		write_to_cpy = write(cpy_file, str, MAX_SIZE);
		_error_check(argv, argc, read_cont, write_to_cpy);
	}
	close_file = close(orig_file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close fd", orig_file);
		exit(100);
	}
	close_file = close(cpy_file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close fd", cpy_file);
		exit(100);
	}
	return (0);
}

