#include <stdio.h>
#include <stdlib.h>

/**
*main - print different combo of three digits
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i = 48;
int e = 48;
int g = 48;

while (e < 58)
{
while (i < 58)
{
while (g < 58)
{
if (e != i && e != g && i != g && e < i && i < g)
{
putchar(e);
putchar(i);
putchar(g);
if (i == 56 && e == 55 && g == 57)
{
break;
}
putchar(',');
putchar(' ');
}
g++;
}
i++;
}
e++;
}
putchar('\n');
return (0);
}
