#include "main.h"

/**
*_isalpha - entry point
*@c: checks for alphabetic character
*Return: 1 if c is a letter, lowercase or uppercase or uppercase, 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
