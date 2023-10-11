#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * File: "function_pointer.h"
 * Desc: This  file  contain all prototype used in the  file function_pointers.
 */

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
