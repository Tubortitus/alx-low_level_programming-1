#include "main.h"

/**
 * print - print variable recursively using _putchar
 * @n: variable to print
 */
void print(int n);

/**
 * print_to_98 - print all natural numbers from var to 98
 * @var: the starting limit
 *
 * Created by: Sanctus-Peter
 * cc: 5th july, 2022
 */
void print_to_98(int var)
{
	int stopLimit = 98;

	if (var > stopLimit)
	{
		for (var; var >= stopLimit; var--)
		{
			print(var);
			if (var != stopLimit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (var; var <= stopLimit; var++)
		{
			print(var);
			if (var != stopLimit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

/**
 * print - to print
 * @n: var
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
