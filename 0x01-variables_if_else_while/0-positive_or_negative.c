#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*main - Prints a randum Num and identifies negetive or posetive or zero */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is Posetive \n", n);
else if (n < 0)
printf("%d is Negative \n", n);
else
printf("%d is Zero \n", n);
return (0);
}
