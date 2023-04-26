#include "main.h"
int _printf(const char *sp, ...)
{
	int i;
	int n;
	va_list l;

	n = 0;
	va_start(l, sp);
	for (i = 0; sp[i] != '\0'; i++)
	{
		if (sp[i] != '%')
		{
			n++;
			_putchar(sp[i]);
		}
		else
		{
			switch (sp[++i])
			{
				case 'i':
					n+=_print_i(va_arg(l, int));
					break;
				case 'd':
					n+=_print_d(va_arg(l, int));
					break;
				case '%':
					n++;
					_putchar('%');
					break;
			}
		}
	}
	va_end(l);
	return (n);
}

