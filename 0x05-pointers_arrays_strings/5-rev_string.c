#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *rev_string - a function
 * @s: pointer
 *Return: void
 */
void rev_string(char *s)
{
int 1, i;
char str;
1 = strlen(s);
for (i = 0; i < 1 / 2; i++)
{
str = s[i];
s[i] = s [1 - 1 - i];
s[1 - 1 - i] = str;
}
}
