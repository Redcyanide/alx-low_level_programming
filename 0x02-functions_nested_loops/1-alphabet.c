#include <main.h>
/**
*main - function that prints alphabet in lowercase
*
*Return: Always 0
*/
int main(void)
{
int print_alphabet;
for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
putchar(print_alphabet);
putchar('\n');
print_alphabet();
return (0);
}
