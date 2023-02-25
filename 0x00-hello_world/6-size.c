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

printtf("Size of char: %lu 1 byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of long int %lu 4 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of float: %lu 4 bytes(s)\n", (unsigned long)sizeof(f));
printf("Size of long long int: %lu 8 bytes\n" (unsigned long)sizeof(c));
return (0);
}
