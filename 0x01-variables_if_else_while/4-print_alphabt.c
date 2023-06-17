#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabets except letter q and e
 * Return: Always 0
*/
int main(void)
{
	char ch = 97;

	while (ch <= 122)
	{
		if (ch == 101 || ch == 113)
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
