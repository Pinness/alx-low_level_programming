#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat- concatenate two strings
 * (short description about function)
 * @dest; its the string to be concatenated to
 * @src; its the sting to be concatenated
 * Return a concatenated character
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return dest;
}
