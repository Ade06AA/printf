#include "main.h"
/**
* _print_X - func name
* @n: func arg 1
* Return: k
*/
int _print_X(unsigned int n)
{
	int k = 0;
	int x;

	if (n > 16)
	{
		k = _print_X(n / 16);
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
				_putchar('A');
				break;
			case 11:
				_putchar('B');
				break;
			case 12:
				_putchar('C');
				break;
			case 13:
				_putchar('D');
				break;
			case 14:
				_putchar('E');
				break;
			case 15:
				_putchar('F');
				break;
		}
	}
	return (k);
}

