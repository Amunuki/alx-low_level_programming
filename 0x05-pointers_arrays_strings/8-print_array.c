#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array
 * @s: pointer
 * Return: void
 */
void print_array(int *a, int n)

{
int b;
for (b = 0; b < n; b++)
{
printf("%d", *(a + b));
if (b == n - 1)
continue;
printf(",");
printf(" ");
}
printf("\n");
}
