#include <stdlib.h>
#include <stdio.h>

/**
* main - prints lower and upper case
*
* Return: always zero
*/
int main(void)
{
char a;
char b;
for(a = 'a'; a <= 'z'; a++)
{
putchar (a);
}
for (b = 'A'; b <= 'Z'; b++)
{
putchar (b);
}
putchar ('\n');
return (0);
}
