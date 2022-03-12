#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all numbers of base 16 in lowercase
 * Return: return 0 as success
 */

int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num < 10);
	{
		putchar(num + '0');
		num++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
