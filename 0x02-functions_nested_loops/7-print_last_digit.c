#include "main.h"

/**
*print_last_digit - entry point(prints the last digit of a number)
*@n:the int whose last digit is printed
*Return: value of last digit
*/

int print_last_digit(int n)
{
int a;

for (a == n % 10;)
_putchar(a + '0');
return (a);
}
