#include
/**
 * print_sign - prints the sign of a number
 * @n: takes an integer value and pass to the function
 * Return: 1 (Always Sucess)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
