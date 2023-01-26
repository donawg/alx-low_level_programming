#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - struct of format code and function to print format
 * @code: format code
 * @func: function designed to print that format
 */
typedef struct op
{
	char code;
	void (*func)(void *arg);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(void *arg);
void print_i(void *arg);
void print_f(void *arg);
void print_s(void *arg);
#endif
