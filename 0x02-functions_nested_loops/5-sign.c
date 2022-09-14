#include "main.h"
/**
*print_sign - entry point
*@n: prints the sign of a number
*Return:1 and print '+' if (n > 0)
*Return1:0 and print '0' if (n = 0)
*Return-1:-1 and print '-' if (n < 0)
*
*/
int print_sign(int n)
{
if (n > 0)
_putchar('+');
return (1);
{
if (n == 0)
_putchar('0');
return (0);
}
if (n < 0)
_putchar('-');
return (-1);
}
