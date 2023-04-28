#include "main.h"
/**
* _print_x - func name
* @n: func arg 1
* Return: k
*/
int _print_x(unsigned int n)
{
	int k = 0;
	int x;

	if (n > 16)
	{
		k = _print_x(n / 16);
		k++;
	}
	k++;
	x = n % 16;
	if (x < 9)
		_putchar(x + '0');
	else
	{
		switch (x)
		{
			case 10:
				_putchar('a');
				break;
			case 11:
				_putchar('b');
				break;
			case 12:
				_putchar('c');
				break;
			case 13:
				_putchar('d');
				break;
			case 14:
				_putchar('e');
				break;
			case 15:
				_putchar('f');
				break;
		}
	}
	return (k);
}
