#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * from string src into dest.
 * @dest: The string storage copy
 * @src: The source.
 * @n: The maximum number of bytes copied
 * Return: A pointer to the resulting dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
