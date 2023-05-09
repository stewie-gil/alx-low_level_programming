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
int i;
int low = 0;
 int high = (signed)size - 1;
int m = 0;

while (low <= high)
{

printf("Searching in array: ");

for (i = array[low]; i <= array[high]; i++)
{
printf("%d", i);

if (i != array[high])
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
