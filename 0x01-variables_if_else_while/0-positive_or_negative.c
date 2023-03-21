#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Generates a random integer and
 * prints it and says wheather it is positive , negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d", n, "is zero\n");
	}
	if (n < 0)
	{
		printf("%d", n, "is negative\n");
	}
	if (n > 0)
	{
		printf("%d", n, "is positive\n");
	}
	return (0);
}