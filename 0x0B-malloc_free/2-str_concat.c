#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - creates a new memory location and stores s1 + s2
 * @s1: first string input
 * @s2: second string input
 * Return: pointer to new memory location
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, len1 = 0, len2 = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		len2++;
	}
	if (len1 + len2 != 0)
	{
		ptr = (char *)malloc(len1 + len2 + 1);
		if (len1 != 0)
		{
			for (i = 0; i < len1; i++)
			{
				*(ptr + i) = *(s1 + i);
			}
		}
		if (len2 != 0)
		{
			for (j = len1; j < (len1 + len2); j++)
			{
				*(ptr + j) = *(s1 + j);
			}
		}
		return (ptr);
	}
	else
		return (NULL);
}
