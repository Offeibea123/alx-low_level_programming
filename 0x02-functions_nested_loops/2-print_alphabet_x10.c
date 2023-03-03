#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		_putchar('\n');
	}
}
