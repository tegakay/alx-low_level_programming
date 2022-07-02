#include <stdio.h>
/**
 * main -function main
 * Return: 0
 */

int main(void)
{
	char letter;
	char upper;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
