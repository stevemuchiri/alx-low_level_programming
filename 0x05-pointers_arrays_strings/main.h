#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Desc: Header file  containing prototypes for  all funtions
 * 	 used in 0x05 pointers array and  strings file.
 */

#include <stdlib.h>

void reset_to_98(int *n);
void swap_int(int *a, int *b);
size_t _strlen(const char *str);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, const char *src);
int _putchar(char c);

#endif
