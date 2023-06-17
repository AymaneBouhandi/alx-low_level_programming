#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters in lowercase
 *
 * Return: always 0 (succcess)
*/

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
