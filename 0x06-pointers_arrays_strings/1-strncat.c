#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - to incatenate
 * (short description)
 * @dest: to incatenate
 * @src: to incatenate
 * @n: to be incatenated
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return dest;
}
