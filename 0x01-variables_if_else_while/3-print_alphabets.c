#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a' - 'z'; letter <= 'A' - 'Z'; letter++)
		putchar(letter);
	putchar ('\n');

	return (0);
}
