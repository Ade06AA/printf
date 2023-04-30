#include "main.h"
/**
* _printf - func name
 * a replica of the C language printf function
* @sp: func arg 1
* Return: n
 * returns the lent of the string printed
*/
int _printf(const char *sp, ...)
{
	int i, n = 0;
	char ss;
	va_list l;
	char *va;

	if (sp == 0 || ((*sp == '%') && *(sp + 1) == '\0'))
		return (-1);
	va_start(l, sp);
	for (i = 0; sp[i] != '\0'; i++)
	{
		ss = sp[i + 1];
		if (sp[i] != '%' || ss == '%')
		{
			n++;
			(sp[i] != '%') ? sp += 0 : sp++;
			(sp[i] != '%') ? _putchar(sp[i]) : _putchar('%');
			continue;
		}
		else if (ss == 'o' || ss == 'u' || ss == 'x' || ss == 'X')
		{
			n = _ui(ss, n, va_arg(l, unsigned int));
		}
		else if (ss == 'i' || ss == 'b' || ss == 'c' || ss == 'd' || ss == 'u')
		{
			n = fswitch(ss, n, va_arg(l, int));
		}
		else if (ss == 'S' || ss == 's')
		{
			va = (va_arg(l, char *));
			n += (ss == 'S') ? _print_S(va) : _print_s(va);
		}
		else
			n += _default(sp + i);
		sp++;
	}
	va_end(l);
	return (n);
}
/**
* _default - func name
 * give instruction on what to do if a format type is not suported
* @sp: func arg 1
* Return: 2 as lengt
*/
int _default(const char *sp)
{
	_putchar(*sp);
	_putchar(*(sp + 1));
	return (2);
}
/**
* fswitch - func name
* @sp: func arg 1
* @n: func arg 2
* @va: func arg 3
* Return: n
*/
int fswitch(char sp, int n, int va)
{
	if (va < 0)
		n++;
	switch (sp)
	{
		case 'i':
			n += _print_i(va);
			break;
		case 'd':
			n += _print_d(va);
			break;
		case 'c':
			n += 1;
			_putchar((char) va);
			break;
		case 'b':
			n += _print_b(va);
			break;
		case 'u':
			n += _print_d(va);
			break;
	}
	return (n);
}
/**
* _ui - func name
* @sp: func arg 1
* @n: func arg 2
* @va: func arg 3
* Return: n
*/
int _ui(char sp, int n, unsigned int va)
{
	switch (sp)
	{
		case 'o':
			n += _print_o(va);
			break;
		case 'X':
			n += _print_X(va);
			break;
		case 'x':
			n += _print_x(va);
			break;
		case 'u':
			n += _print_u(va);
			break;
	}
	return (n);
}
