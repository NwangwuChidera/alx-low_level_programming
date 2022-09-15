#include "main.h"
/**
 * _isdigit - This function checks for digit
 * @c: This is an ASCII character
 * Return: 1 if c is a digit otherwise return 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
