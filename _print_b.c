#include "main.h"
/**
* _print_b - func name
* @b: func arg 1
 * the int to be printed
* Return: i
 * amount of letters printed
*/
int _print_b(int b)
{
	int i = 0;

	if (b > 2)
	{
		i = _print_b(b / 2);
	}
	if (b > 0)
		_putchar((b % 2) + '0');
	if (b < -2)
	{
		b = -b;
		for (i = 32; i > 0; i--)
			_putchar((b & (1 << i)) ? '0' : '1');
	}
	i++;
	return (i);
}

