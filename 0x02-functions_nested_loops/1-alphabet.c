#include "main.h"
/**
*print_alphabet - prints the alphabet in lowercase
*Descrirtions: a function to print alphabet
*Return:void
*/

void print_alphabet(void)
{
char ch;

ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}