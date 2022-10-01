#include "main.h"
/**
 *swap_int - This is a function that the value of two integers
 *@a: pointer to the first integer
 *@b: pointer to the second interger
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
