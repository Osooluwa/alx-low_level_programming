#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);


/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: the name of the file buffer is storing chars for
 * Return: pointer to the newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int c;

	c = clode(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: the number ofarguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 *
 * Description: if the argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read - exit code 98
 * If file_from cannot or written to - exit code 99
 * If file_to or file_from cannot be closed - exit code 100
 */
