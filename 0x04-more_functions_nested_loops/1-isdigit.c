#include <stdio.h>
#include "main.h"

/**
 *_isdigit -a function that checks for a digit (0 t0 9)
 *@c: inputs alphabet
 *Return: returns a value
 */
int _isuper(int c)

{
int result;
if (c >= 48 && c <= 57)
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
