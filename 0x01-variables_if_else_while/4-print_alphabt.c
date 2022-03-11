#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 as success
 */

int main(0)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

