#include <stdio.h>
/**
 * main - printng out arguments
 *
 * @argv: argument vector
 *
 * @argc: argument count
 * Return: always zero
 */
int main(int argc, char *argv[])
{
int c;
for (c = 0; c < argc; c++)
printf("%s\n", argv[c]);
return (0);
}
