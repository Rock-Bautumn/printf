#include <stdio.h>
#include "main.h"

int main(void) {
    int len1, len2;
	char *str;

    str = "This is an example of a big string. In West Philadephia, born and raised, on the playground is where I spent most of my days. Chillin' out, maxin', relaxin' all cool and all, shootin' some B-ball outside of the school, when a couple of guys, who were up to no good, started making in my neighborhood. I got in one small fight and my mom got scared, she said 'You're movin with your auntie and uncle in Bel-Air'";
    len1 = _printf("Let's print a simple sentence.\n");
    len2 = printf("Let's print a simple sentence.\n");
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("%c", 'S');
    len2 = printf("%c", 'S');
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("Let'see if the cast is correctly done: %c Did it work?\n", 48);
    len2 = printf("Let'see if the cast is correctly done: %c Did it work?\n", 48);
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("%s", "This sentence is retrieved from va_args!\n");
    len2 = printf("%s", "This sentence is retrieved from va_args!\n");
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("%c%cth %s%sa%cg%s: Y%sou %s no%ching%s Snow. %c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    len2 = printf("%c%cth %s%sa%cg%s: Y%sou %s no%ching%s Snow. %c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("%%");
    len2 = printf("%%");
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("Should print a single percent sign: %%\n");
    len2 = printf("Should print a single percent sign: %%\n");
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("css%ccs%scscscs", 'T', "Test");
    len2 = printf("css%ccs%scscscs", 'T', "Test");
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf(str);
    len2 = printf(str);
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("fman gcc:\n%s", str);
    len2 = printf("fman gcc:\n%s", str);
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf(NULL);
    len2 = printf(NULL);
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("%c", '\0');
    len2 = printf("%c", '\0');
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("%\n");
    len2 = printf("%\n");
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("%!\n");
    len2 = printf("%!\n");
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    len1 = _printf("%K\n");
    len2  = printf("%K\n");
    printf("len1 = %d - %d = len2\n\n", len1, len2);
    return (0);
}
