#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n
		Srand (time (0));
	n - rand () = RAND-MAX /2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
		}
	else if (n -- 0)
	{
		printf("%d is zero\n", n);
	}
	else (n < 0)
	{
		printf("%d is negative\n" n);
	}
	return (0);
}
