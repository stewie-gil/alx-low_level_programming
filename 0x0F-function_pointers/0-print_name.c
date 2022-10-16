#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: name
 * @f: function to send name to
 * Return: nothing
 */
void print_name(char *name, void(*f)(char *))
{
if (name || f)
f(name);
return;
}
