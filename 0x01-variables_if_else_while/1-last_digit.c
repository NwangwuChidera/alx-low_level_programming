#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number
 * Return: 0 always
 */
int main(void)
{
	int n, last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10
	if (last_d > 5)
	{
		printf("last_d of %d is %d and is greatet than 5\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("last_d of %d is %d and is 0\n", n, last_d);
	}
	else
	{
		printf("last_d of %d is %d and is less tthan 6 not zero\n", n, last_d)
	}
	return (0);
}

