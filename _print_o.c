#include "main.h"
/**
* _print_o - func name
* @n: func arg 1
* Return: k
*/
int _print_o(unsigned int n)
{
	int k = 0;

	if (n > 8)
	{
		k = _print_o(n / 8);
		k++;
	}
	k++;
	_putchar((n % 8) + '0');
	return (k);
}
