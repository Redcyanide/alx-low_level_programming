#include <stdio.h>

/**
*main - prints all possible combnations of single digit numbers
*
*Return: Always 0 (success)
*/
int main(void)
{
int n = 48;
int com = 44;
while (n <= 57)
{
putchar(n);
if (n != 57)
{
putchar(com);
putchar(32);
}
n++;
}
putchar('\n');
return (0);
}