#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random keygen.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char key[64];
	int i;

	srand(time(NULL));

	for (i = 0; i < 63; i++)
		key[i] = rand() % 94 + 33; /* Printable ASCII characters */

	key[i] = '\0';

	printf("%s\n", key);

	return (0);
}
