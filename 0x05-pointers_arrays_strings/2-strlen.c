#include "main.h"

/**
 *int _strlen(char *s) - returns length of a string
 *@s : string
 *Return: no return
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
