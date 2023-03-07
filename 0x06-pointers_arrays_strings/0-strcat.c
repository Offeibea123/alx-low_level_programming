#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: value that appends the src string
 *@src: value that appends the dest string
 * Return: 0 (Always sucess)
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
