#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * open_files - Opens the source and destination files.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 *
 * Return: An array containing the file descriptors
 * of the source and destination files.
 */
int *open_files(char *file_from, char *file_to)
{
	int *fd = malloc(2 * sizeof(int));

	fd[0] = open(file_from, O_RDONLY);
	if (fd[0] < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd[1] = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd[1] < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd[0]);
		exit(99);
	}
	return (fd);
}

/**
 * copy_content - Copies content from one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 *
 * Return: 0 if successful, or 99 if an error occurred
 * while writing to the destination file.
 */
int copy_content(int fd_from, int fd_to)
{
	ssize_t n;
	char buf[BUF_SIZE];

	while ((n = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, n) != n)
		{
			dprintf(2, "Error: Can't write to fd %d\n", fd_to);
			return (99);
		}
	}
	if (n < 0)
	{
		dprintf(2, "Error: Can't read from fd %d\n", fd_from);
		return (98);
	}
	return (0);
}

/**
 * close_files - Closes two files.
 * @fd_from: The file descriptor of the first file.
 * @fd_to: The file descriptor of the second file.
 *
 * Return: 0 if successful, or 100 if an error occurred while closing a file.
 */
int close_files(int fd_from, int fd_to)
{
	if (close(fd_from) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}
	return (0);
}

/**
 * main - Parses arguments and calls helper functions to copy files.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful, or one of the following error codes if not:
 * - 97 if the wrong number of arguments was passed.
 * - 98 if an error occurred while reading from the source file.
 * - 99 if an error occurred while writing to the destination file.
 * - 100 if an error occurred while closing a file.
 */
int main(int argc, char *argv[])
{
	int res;
	int *fd;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open_files(argv[1], argv[2]);
	res = copy_content(fd[0], fd[1]);
	if (res != 0)
	{
		close_files(fd[0], fd[1]);
		exit(res);
	}
	res = close_files(fd[0], fd[1]);
	free(fd);
	return (res);
}

