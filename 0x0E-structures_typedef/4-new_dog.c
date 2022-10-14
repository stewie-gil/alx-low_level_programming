#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - returns pointer
 * @str: string to copy
 * Return: a pointer
 */
char *_strdup(char *str)
{
char *ar;
unsigned int i = 0;
unsigned int j = 0;
if (str == NULL)
return (NULL);
while (str[i])
i++;
ar = malloc(sizeof(char) * (i + 1));
if (ar == NULL)
return (NULL);
while (str[j])
{
ar[j] = str[j];
j++;
}
ar[j] = 0;
return (ar);
}
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
char *ncpy;
char *ocpy;
new = malloc(sizeof(dog_t));
if (new == NULL)
return (NULL);
ncpy = _strdup(name);
if (!ncpy && name)
{
free(new);
return (NULL);
}
ocpy = _strdup(owner);
if (!ocpy && owner)
{
free(ncpy);
free(new);
return (NULL);
}
new->name = ncpy;
new->age = age;
new->owner = ocpy;
return (new);
}
