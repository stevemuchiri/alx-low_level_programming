#ifndef VARIADIC_FUNTIONS_H
#define VARIADIC_FUNTIONS_H

/**
 * File: variadic_funtions.h
 * Desc: This  file  contains all funtion  prototypes  used 
 * in 0x10-variadic_functions folder.
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
