#include "main.h"
/**
 *print_last_digit - prints the last digit
 *@a: number that prints the last digit
 *Return: the value of the last digit
 */
int print_last_digit(int a)
{
	int d = a % 10;

	if (d < 0)
	{
		d = -(d);
		_putchar('0' + d);
		return (d);
	}
	_putchar(d + '0');
	return (d);
}
