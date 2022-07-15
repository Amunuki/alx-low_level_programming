#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: pointer
 * @src pointer
 * Return: returns char
 */

char *_strcat(char *dest, char *src)
{
int i, 11, 12;
11 = strlen(src);
12 = strlen(dest);
for (i = 0; i < 11; i++)
{
*(dest + 12 + i) = *(src + i);
}
return (dest);
}
