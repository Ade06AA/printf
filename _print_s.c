#include "main.h"
/**
* _print_s - func name
* @s: func arg 1
* Return: i
*/
int _print_s(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
