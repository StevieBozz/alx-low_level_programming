#include <stdio.h>

/**
 * main - prints single digit in base 10
 * Return: Always 0
 */
int main(void)
{
	int hel;

	for (hel =0; hel < 10; hel++)
		putchar((hel % 10) + '0');

	putchar('\n')

	return (0);
}
