#ifndef __FUNCTION_POINTER_H__
#define __FUNCTION_POINTER_H__
#include <stddef.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /*__FUNCTION_POINTER_H__*/
