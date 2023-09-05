#include "main.h"
/**
 * read_textfile - reads a file, prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 if file cannot
 * be opened or read, filename is NULL or write fails
 * or does not write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	text = malloc(letters * sizeof(char));
	if (text == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, text, letters);
	if (rd == -1)
		return (0);
	wr = write(fd, text, rd);
	if (wr == -1)
		return (0);
	close(fd);
	return (rd);
}
