#include "main.h"
/**
* _print_S - func name
* @s: func arg 1
* Return: i
*/
int _print_S(char *s)
{
	int i;
	int k;

	k = 0;
	for (i = 0; s[i]; i++)
	{
		k++;
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			k+=1;
			_putchar('\\');
			_putchar('x');
			if (s[i] < 16)
				_putchar('0');
			k+=_print_X(s[i]);
		}
		else
			_putchar(s[i]);
	}
	return (k);
}
