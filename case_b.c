#include "main.h"
#include <stdlib.h>
/**
 * dec_to_binary - converts a decimal to a binary
 * @n: variable
 * Return: 0
 */

int dec_to_binary(int n)
{
	int temp = n;
	int count = 0;
	int i;
	int count2 = 0;

	while (temp > 0)
	{
		temp /= 2;
		count++;
		count2++;
	}
	for (count -= 1; count >= 0; count--)
	{
		i = n >> count;

		if (i & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	return (count2);
}