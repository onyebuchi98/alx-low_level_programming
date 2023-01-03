#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @c: occurence of character
 *
 * @s: in string
 *
 * Return: a pointer to the fitst occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
