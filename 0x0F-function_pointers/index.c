#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
  int i, p;
  
  if (size <= 0)
    return (-1);
  
 for (i = 0; i < size; i ++)
 {
   p=(cmp(array[i]));
   if (p != 0)
     {
       return (i);
     }
   else
     {
       return (-1);
     }
 }
 return (i);
}
