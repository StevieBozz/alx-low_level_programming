#include <stdio.h>

/*
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char laa;

	for (laa = 'a'; laa <= 'z'; laa++)
		putchar(laa);

	for (laa = 'A'; laa <= 'Z'; laa++)
		putchar(laa);

	putchar('\n');

	return (0);
}
