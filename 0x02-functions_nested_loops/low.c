#include <stdio.h>
#include "main.h"

/*
* main - checking lowercase letters
*
* Return: returns 1 if lowercase
*/
int _islower(int c)
{
if ((c >= 97) && (c <= 122)) 
{
return (1);
}
return (0);
}
