#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num <= 9; num++)
		{
			if (num1 != 8 && num2 != 9)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar('\n');
			}
		}
	}
	return (0);
}
