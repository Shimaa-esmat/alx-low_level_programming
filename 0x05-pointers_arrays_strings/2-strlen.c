#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int counter;

	for (cunter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
