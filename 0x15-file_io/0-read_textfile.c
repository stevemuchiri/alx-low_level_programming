#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p, m, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	m = read(p, buffer, letters);
	w = write(STDOUT_FILENO, buffer, m);

	if (p == -1 || m == -1 || w == -1 || w != m)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(p);

	return (w);
}
