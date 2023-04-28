#include "main.h"
/**
* _print_u - func name
* @n: func arg 1
* Return: k
*/
int _print_u(unsigned int n)
{
	int k = 0;

	if (n >= 10)
	{
		k = _print_d(n / 10);
		k++;
	}
	else
		k++;
	_putchar((n % 10) + '0');
	return (k);
}
