#ifndef MAIN_H
#define MAIN_H

void cprint(char c);
int printint(int);
int printchar(char);
int printstring(char *);
char *_itoa(int, char *);
int printpercent(void);
int _printf(const char *format, ...);

/*
 *
 * struct pr - Struct of Print func
 *
 * @ar: Argument passed
 * @f: The function associated
 */

/*
 *typedef struct pr
 *{
 *	char *ar;
 *	void (*f)(va_list);
 *} pr_t;
*/

#endif /* MAIN_H */
