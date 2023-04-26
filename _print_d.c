#include "main.h"
/**
* _print_d - func name
* @n: func arg 1
* Return: k
*/
int _print_d(int n)
{
	int k = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		k = _print_d(n / 10);
		k++;
	}
	else
		k++;
	_putchar((n % 10) + '0');
	return (k);
}
