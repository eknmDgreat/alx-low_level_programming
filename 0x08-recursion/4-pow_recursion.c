#include "main.h"

/**
* _pow_recursion - retruns the value of x raise to the power of y
* @x: base
* @y: exponent
* Return: value of exponent
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	else
	return (x * _pow_recursion(x, y - 1));
}
