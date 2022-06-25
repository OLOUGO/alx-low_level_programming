#include "main.h"
/**
 * _isupper - checks if c is uppercase
 * @c: the var to be evaluated
 *
 * Return: 1 for uppercase else 0
 */
int _isupper(int c)
{

int isupper;

    isupper = 0;
	if ((c >= 'A') && (c <= 'Z'))
	{
		isupper = 1;
	}

	return (isupper);
}
