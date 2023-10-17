#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);
int MO_mod(char c);
int MO_char_char(char c);
int MO_str(char *s);
int op(char c, va_list *list);
int MO_help(int d, int a, int x);
int MO_int(va_list **list);
int rot_3(char *s);

#endif
