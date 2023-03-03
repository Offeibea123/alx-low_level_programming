#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@num: an integer that passes the value to the function
 * Returns: Returns the number back
 */
int print_last_digit(int num)
{
	int d = num % 10;
		if (d < 0)
	{
		d = -(d);
		_putchar('0' + d);
		return (d);
	}
	_putchar(d + '0');
	return (d);
}
