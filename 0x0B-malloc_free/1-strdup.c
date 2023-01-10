#include "main.h"
/**
 * _strlen - _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @s: array of elements
 * Return: returns a pointer to the duplicated string.
 *
 * It returns NULL if insufficient memory was available
 */

int _strlen(char *s)
{
unsigned int i;

i = 0;
while (s[i] != '\0') /*count character of string*/
{
i++;
}

return (i);
}

/**
 *_strcpy - copy arrays
 *@src: array of elements
 *@dest: dest array
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

/**
 *_strdup - array for prints a string
 *@str: array of elements
 *Return: pointer
 */

char *_strdup(char *str)
{
char *dst;
unsigned int size;

if (str == 0)
{
return (NULL);
}

size = _strlen(str) + 1;

dst = (char *) malloc(size *sizeof(char));

if (dst == 0)
{
return (NULL);
}
_strcpy(dst, str);
return (dst);
}
