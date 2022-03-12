#include <stdio.h>

/**
 * main - Entry Point
 * Description: numbers that print three digits
 * Return: returns 0 as success
 */

int main(void)
{
	int i, j, k;

	i = 48;
	j = 48;
	k = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
				while (k < 58)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55 || j < 56 || k < 57)
					{
						putchar(44);
						putchar(32);
					}
					k++;
				}
				j++;
		}
		i++;
	}

	putchar(10);

	return (0);
}
