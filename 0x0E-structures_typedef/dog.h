#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - just a dog
 * @name: name of the dog
 * @owner: who owns it
 * @age: how old
 */
struct dog
{
char *name;
char *owner;
float age;
};
/**
 * typedef dog_t - new name for struct dog
 */

typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
