#include <stdio.h>

/*
 * main - print all alphabets except q and e
 *
 * Return: 0 Always
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter = 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
