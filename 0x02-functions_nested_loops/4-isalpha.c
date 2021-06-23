#include "holberton.h"

/**
 *_isalpha - check for alphabetic character
 *
 *@c: checked character
 *Return: 1 if c is a letter, lower or upper case, 0 otherwise
 */

int _isalpha(int c)
{
	return (c >= 'A' && c <= 'z');
}

