#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 *
 * @dest: Destination buffer to copy to.
 * @src: Source string to copy from.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
