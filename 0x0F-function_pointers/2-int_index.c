#include "function_pointers.h"
/**
 * int_index - integer
 * @array: array
 * @size: number
 * @cmp: pointer
 * Return: return 0;
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int (*p)(int);
p = cmp;
if (size <= 0)
return (-1);
if (!array || !cmp)
return (-1);
for (i = 0; i < size; i++)
{
if (p(array[i]) && array[i] != 0)
break;
if (i == size - 1)
return (-1);
}
return (i);
}
