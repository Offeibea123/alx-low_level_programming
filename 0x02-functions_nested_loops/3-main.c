#include "main.h"
/**
 * _is lower - checks for lowercase character
 *
 * Return: 0 (Always success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
