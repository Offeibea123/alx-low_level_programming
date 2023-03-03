#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @num: parameter that takes an integer argument and execute it
 * Return: 0 (Always success)
 */
int _abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}
