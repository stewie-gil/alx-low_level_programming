#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * printarray - prints the array we are searching
 * @array: array being passed
 * @low: the first index
 * @high: the last index
 * Return: Void
 */

void printarray(int *array, size_t low, size_t high)
{
size_t i;
printf("Searching in array:");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
}
printf("\n");
}


/**
 * binary_search - searches for a value using binary search
 * @array: the array we will be searching through
 * @size: how many numbers we havein the array
 * @value: the number we are looking for
 * Return: returns -1 if value not present or array is null
 */
int binary_search(int *array, size_t size, int value)
{
size_t low, high, middle;
high = size - 1;
low = 0;
if (array == NULL || size == 0)
return (-1);
printarray(array, low, high);

while (low < high)
{
middle = low + (high - low) / 2;

if (array[middle] > value)
{
high = middle - 1;
printarray(array, low, high);
}
else if (array[middle] < value)
{
low = middle + 1;
printarray(array, low, high);
}
else if (array[middle] == value)
{
return (value);
}
}
return (-1);
}