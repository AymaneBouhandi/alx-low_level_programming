#include <unistd.h>

/**
 * main - entry point
 *
 * Deacription: print a quote using write func
 *	size_t write(int fd, const void buffer, size_t count)
 *
 * Return: 1 (error)
*/

int main(void)
{	char quot[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n"

	write(1, quot, 59);
	return (1);
}
