#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_search - searches through a list through binary search
 * @array: the array we are searching
 * @size: the size of the array
 * @value: the value to search
 * Return: Returns the index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
unsigned int i;
size_t low = 0;
size_t high = size - 1;
size_t m = 0;

while (low <= high)
{

printf("Searching in array: ");

for (i = low; i <= high; i++)
{
printf("%d", array[i]);

if ((signed int) i != array[high])
printf(", ");
}

printf("\n");


m = (low + high) / 2;

if (array[m] < value)
{
low = m + 1;
}
else if (array[m] > value)
{
high = m - 1;
}
else
return (m);
}
return (-1);
}
