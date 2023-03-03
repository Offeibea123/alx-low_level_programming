#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int count, ch;

	for (count = 1; count <= 10; count++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		_putchar('\n');
	}
}
