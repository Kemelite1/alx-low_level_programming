#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @k: function paramieter to be checked
 * Return: always k
 */
int _abs(int k)
{
	if (k < 0)
		k = -(k);
	else if (k >= 0)
		k = k;
	return (k);
}
