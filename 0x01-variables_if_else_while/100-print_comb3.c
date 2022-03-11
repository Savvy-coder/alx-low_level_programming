#include <stdio.h>

/**
 * main - Entry Point
 * Description: A program that prints all possible
 * Different combinations of two digits
 * Return: returns 0 as success
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');

	return (0);
}

