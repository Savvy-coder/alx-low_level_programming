#include <stdio.h>



/**
 * main - largest prime factors
 *
 * Return: 0 as success
 */



int main(void)

{

	long int i, f;

	i = 612852475143;

	for (f = 2; f <= i; f++)

	{

		if (i % f == 0)
												{
													i /= f;

			f--;

												}

	}

	printf("%ld\n", f);

	return (0);

}
