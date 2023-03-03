#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 * @c: parameter that prints lowercase or uppercase
 * Return: 1 (Always sucess)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <=122)
	{
		return (1);
	}
	return (0);
}
