#include "main.h"

#include <stdio.h>

#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	
	i = 1;
	j = 2;
	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[i]) * atoi(argv[j]));
	return (0);
}
