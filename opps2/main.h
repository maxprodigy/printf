#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int main(void);
int _puts(char *s);
int _strlen(char *s);
int print_number(int n);
int int_handler(int value);
int dec_to_binary(int n);
#endif /* MAIN_H */


