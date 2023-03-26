#include "function_pointers.h"
/**
 * print_name -> funtion print a name
 * @name: print to string
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
