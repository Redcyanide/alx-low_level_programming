#include <stdio.h>
#include <stdlib.h>
/**
*main - prints all possible different combinations of two digits.
*
*Return: Always 0 (success)
*/
int main(void)
{
int c;
int d = 0;
while (d < 10)
{
if (d != c && d < c)
{
putchar(d + '0');
putchar(c + '0');

if (c + d != 17)
{
putchar(',');
putchar(',');
}
++c;
}
++d;
}
putchar('\n');
return (0);
}
