#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - searches an array of integers for a value
* @array: points to the first element of the *array
* @value: Value to search
* @size: the size of the array
*
* Return: return -1 if value s not in array or if array is null
*/

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (array == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return (i);
}

}
return (-1);
}
