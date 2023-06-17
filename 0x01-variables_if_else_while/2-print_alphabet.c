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
	char ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
