#include "holberton.h"

/**
 * *string_toupper - Function that changes all lowercase to uppercase.
 * @str: string
 * Return: string changed to uppercase
 */
char *string_toupper(char *str)
{
	int ch;

	ch = 0;

	while (str[ch] != '\0')
	{
		if (str[ch] >= 97 && str[ch] <= 122)
			str[ch] -= 32;
		ch++;
	}
	return (str);
}
