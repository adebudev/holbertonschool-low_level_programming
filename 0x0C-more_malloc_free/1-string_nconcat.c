#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: Pointer type Character
 * @s2: Pointer type Character
 * @n: unsigned type Integer.
 * Return: str.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, a = 0;
	unsigned int leng1, leng2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
	{
		s2 = "";
	}

	leng1 = leng_string(s1);
	leng2 = leng_string(s2);

	if (leng2 < n)
	{
		n = leng2;
	}
	str = malloc(sizeof(*str) * (leng1 + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (leng1 + n); x++)
	{
		if (x < leng1)
		{
			str[x] = s1[x];
		}
		else
		{
			str[x] = s2[a];
			a = a + 1;
		}
	}
	str[x] = '\0';
	return (str);
}

/**
 * leng_string - get the length of a string
 * @str: Pointer type Character
 * Return: length
 */

int leng_string(char *str)
{
	unsigned int leng;

	for (leng = 0; str[leng] != '\0'; leng++)
	{
	}
	return (leng);
}