#ifndef H_FILE
#define H_FILE
/*standard header file*/
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>

/*functions pothotype*/
int fswitch(char, int, int);
int _ui(char, int, unsigned int);
int _putchar(char);
int _printf(const char *, ...);
int _print_s(char *);
int _print_i(int);
int _print_d(int);
int _print_u(unsigned int);
int _print_o(unsigned int);
int _print_b(int);
int _print_X(unsigned int);
int _print_x(unsigned int);
#endif
