#ifndef MAINH
#define MAINH

#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);
int _puts(char *str);
int print_bigS(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_rot13(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_width(const char *format, int *i, va_list list);
int print_prec(const char *format, int *i, va_list list);
int print_flags(const char *format, int *i);
int print_len(const char *format, int *i);

/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /* MAINH */
