#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */

int main(void)
{
		int n;
	       srand(time(0));
		n = rand() - RAND_MAX / 2;
			printf("Last digit of %d is ", n);
			if ((n % 10) > 5)
			{
				printf(" and is greater than 5");
			} else if ((n % 10) == 0)
			{
				printf(" and is 0");
			} else if ((n % 10) < 6 && (n % 10 != 0))
			{
				printf(" and is less than 6");
			}
			return (0);

}
