#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * If the string length is odd, it prints from the middle character onwards.
 *
 * @str: Input string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the starting index for printing the second half */
	start_index = length / 2;

	/* Adjust the start index for odd-length strings */
	if (length % 2 == 1)
		start_index++;

	/* Print the second half of the string */
	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}

	_putchar('\n');
}
