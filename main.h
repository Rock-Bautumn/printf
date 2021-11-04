#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int cprint(char c);
int printint(va_list);
int printchar(va_list);
int printstring(va_list);
char *_itoa(int, char *);
int printpercent(void);
int _printf(const char *format, ...);
int (*get_op_func(char s))(va_list);

/**
 * struct op - Struct op
 *
 * @cs: The conversion specifier
 * @f: The function associated
 */
typedef struct op
{
	char *cs;
	int (*f)(va_list n);
} op_t;

#endif /* MAIN_H */
