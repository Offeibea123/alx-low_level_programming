#include <stdio.h>
/**
 * main - entry point for every c programme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;
	int a;
	long int b;
	float f;
	long long int c;
printf("Size of char: %lu 1 byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu 4 byte(s)\n" (unsigned long)sizeof(int));
printf("Size of a long int: %lu 4 byte(s)\n" (unsigned long)sizeof(b));
printf("Size of a long long int: %lu 8 byte(s)\n" (unsigned long)sizeof(c));
printf("Size of a float: %lu 4 byte(s)\n" (unsigned long)sizeof(f));
	return (0);
}
