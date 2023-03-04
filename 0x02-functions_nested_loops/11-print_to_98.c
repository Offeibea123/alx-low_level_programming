#include <stdio.h>
/**
 * print_to_98 - prints all ntatural numbers
 *@w: number to represent natural numbers from 0 to 98
 */
void print_to_98(int w)
{
if (w > 98)
{
for (; w  > 98; w--)
{
printf(" % d ", w);
}
}
else if (w < 98)
{
for (; w < 98; w++)
{
printf(" % d ", w);
}
}
printf(" % d\n", w);
}
