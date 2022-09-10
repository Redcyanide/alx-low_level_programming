#include <stdio.h>

/**
*main - prints all numbers in base 16 in lowercase
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;
char ch = 'f';

while (n <= 9)
{
putchar(n + '0');
++n;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
