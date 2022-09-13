#include "main.h"

/**
 * main - check the code
 * Return: always 0
 */

void _mul(int mul)
{
	if (mul <= 9)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(32);
		_putchar(mul + '0');
	}
	else if (mul >= 10 && mul <= 99)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(mul / 10 + '0');
		_putchar(mul % 10 + '0');
	}
	else if (mul >= 100 && mul < 226)
	{
		_putchar(44);
		_putchar(32);
		_putchar((mul / 100) + '0');
		_putchar(((mul - 100) / 10) + '0');
		_putchar(mul % 10 + '0');
	}
}
