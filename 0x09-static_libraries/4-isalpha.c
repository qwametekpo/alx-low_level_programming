#include "main.h"

/**
 * _isalpha - checks for Alphabetic Character
 * @c: the character to check
 * Return: 1 if c is letter, else return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
