#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: num of letters to be read
 * Return: w- actual num of bytes read & printed
 * 0 when func fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t c;
	ssize_t d;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	d = read(f, b, letters);
	c = write(STDOUT_FILENO, b, d);

	free(b);
	close(f);
	return (c);
}
