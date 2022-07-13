#include <stdio.h>
#include "main.h"

/**
 *print_fuzz for multiplies of 3
 *print_Buzz for multiply of 5
 *print_fizzBuzz for multiplies of 5 and 3
 *Return: void
 */

{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && !(i % 5 == 0))
{
printf("Fizz");
printf(" ");
}
else if ((i % 5 == 0) && !(i % 3 == 0))
{
printf("Buzz");
if (i != 100)
printf(" ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
printf(" ");
}
else
{
printf("%d", i);
printf(" ");
}
}
printf("\n");
}
return (0);
