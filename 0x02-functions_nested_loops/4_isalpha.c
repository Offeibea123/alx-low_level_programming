#include "main.h"
/**
 * _isalpha - checks for alphabbetic character
 * @c: is either a lowercase or uppercase
 * Return: 1 (Always Sucess)
 */
int _isalpha(int c)
{
	if (c > 65 && c < 123)
	{
		return (1);
	}
	return (0);
}
