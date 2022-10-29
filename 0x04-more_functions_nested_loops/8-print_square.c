#include "main.h"
/**
 * @size: sizeof the box
 *
 * print_square - prints a square
 *
 * Return: nothing
 *
 */
void print_square(int size)
{
int j;
int t;
for (j = 0; j < size; j++)
{
for (t = 0; t < size; t++)
{
_putchar(35);
}
_putchar('\n'); 
}
}
