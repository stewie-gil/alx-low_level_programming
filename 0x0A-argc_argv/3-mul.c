#include <stdio.h>
#include <stdlib.h>
/**
 * main - we multiply
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: always frickin zero
 */
int main(int argc, char *argv[])
{
int a, b, mul;
if (argc > 2)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
mul = a * b;
printf("%i\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
