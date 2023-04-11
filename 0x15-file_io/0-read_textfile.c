#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to stdo
 * @filename: string (file name)
 * @letters: number of letters to print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_cont, write_cont, Open_file;
	char *str;

	str = malloc(sizeof(char) * letters);
	Open_file = open(filename, O_RDONLY);
	if (!str || Open_file == -1 || !filename)
		return (0);
	read_cont = read(Open_file, str, letters);
	write_cont = write(STDOUT_FILENO, str, read_cont);
	close(Open_file);
	return (write_cont);
}

