#include <stdio.h>
/**
 *print_to_98 - prints all ntatural numbers
 *@w: number to represent natural numbers from 0 to 98
 */
void print_to_98(int w)
{
int cap_num = 98;

if (w > cap_num)
{
while (w >= cap_num)
{
if (w != cap_num)
{
printf(" % d", w);
}
else
{
printf(" % d, ", w);
}
w--;
}
}
else
{
while (w <= cap_num)
{
if (w != cap_num)
{
printf(" % d", w);
}
else
{
printf(" % d, ", w);
}
w++;
}
}
putchar(10);/*ASCII character for new line*/
}
