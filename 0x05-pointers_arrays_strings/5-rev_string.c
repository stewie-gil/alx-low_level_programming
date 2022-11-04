#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: holi
 *
 */
void rev_string(char *s)
{
int i;
int j;
int k;
 k=0;
 i=0;
 
while (s[k] != '\0')
{
i++;
}
for (j = i; j > 0; j--)
  printf("%c",s[j]);
}
