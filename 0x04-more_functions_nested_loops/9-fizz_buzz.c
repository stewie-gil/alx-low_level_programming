#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
int main (void)
{
  int i;
  int n;
  
  n=100;

  for (i=1; i <= n; i++)


    {

    if((i%3) == 0 && (i%5) == 0)
	{
	  i++;
	printf("FizzBuzz ");
      	}

    else if ((i%3) == 0)
	{
	  i++;
	  printf("fizz ");
	  }
      
    else if ((i%5) == 0)
	{
	  i++;
	  printf ("Buzz ");
	} 
    else
      printf("%d ", i);
    }


      
  return (0);
}
