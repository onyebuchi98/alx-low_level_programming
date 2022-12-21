#include "main.h"
/**
 * _strien - return the length of a string
 * code by Daniel
 * @s: char to check
 * Description: this will return length of a string
 * Return: 0
 */
int _strien(char *s)
{

	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
