#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;
	        srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
	
		printf("Last digit of %d",n);
		
		
			if ((n % 10)>5)
			{
				printf(" and is greater than 5");
			} else if ((n % 10 ) == 0)
			{
				printf(" and is 0");
			} else if (( n % 10) <6 && (n %10 != 0))
			{
				printf(" and is less than 6");
			}
			return (0);

}
