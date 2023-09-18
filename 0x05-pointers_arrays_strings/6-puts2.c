#include "main.h"

/**
 * puts2 - Prints every other character of a string starting with the first one.
 *
 * @str: Input string.
 *
 * Return: None.
 */
void puts2(char *str)
{
	int length = 0;
	int index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Print every other character starting with the first one */
	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
