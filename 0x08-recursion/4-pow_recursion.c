#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 * at x: value to raise
 * at y: power
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
