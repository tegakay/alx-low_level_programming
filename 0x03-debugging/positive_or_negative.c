#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int positive_or_negative(void)

{
int n;



		srand(time(0));

				n = rand() - RAND_MAX / 2;

						if (n > 0)

									{

													printf("%d", n);

																printf(" is positive\n");

																		} else if (n == 0)

																					{

																									printf("%d", n);

																												printf(" is zero\n");

																														} else if (n < 0)

																																	{

																																					printf("%d", n);

																																								printf(" is negative\n");

																																										}

																																return (0);



}