#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1; /* Initialize the sign to positive */
	int result = 0;

	/* Skip leading non-digit characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1; /* Toggle the sign if a minus sign is encountered */
		i++;
	}

	/* Calculate the integer value */
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
