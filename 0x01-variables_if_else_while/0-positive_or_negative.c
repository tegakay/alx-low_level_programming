#include <stdlib.h>
#include <stdio.h>

#include <time.h>

/* more headers goes there */


/* function main returns the type of number generated randomly */

int main(void)

{

		int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if(n>0)
		{
			printf("%c",n);
			printf(" is positive\n");
		}else if( n == 0)
		{
			printf("%c",n);
			printf(" is zero \n");
		}else if( n < 0)
		{
			printf("%c",n);
			printf(" is negative\n");
		}
		return (0);

}
