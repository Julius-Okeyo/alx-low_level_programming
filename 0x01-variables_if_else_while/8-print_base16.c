#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
