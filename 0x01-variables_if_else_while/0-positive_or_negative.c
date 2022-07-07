#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*main - Prints a  Randum Num and identifies negetive or posetive or zero */
/* betty style Doc for function main goes there */
int main(void)
{
int n;
srand(time(0));i
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is Posetive \n", n);
else if (n < 0)
printf("%d is Negative \n", n);
else
printf("%d is zero \n", n);
return (0);
}
