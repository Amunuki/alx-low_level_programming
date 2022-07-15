#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints half character
 * @str: pointer
 * Return: void
 */
void puts_half(char *str)
{
int 1, a;
1 = strlen(str);
if (1 % 2 == 0)
{
for (a = 1 / 2; a < 1; a++)
{
_putchar(*(str + a));
}
}
else
{
for (a = (1 + 1) / 2; a < 1; a++)
_putchar(*(str + a));
}
_putchar('\n');
}
