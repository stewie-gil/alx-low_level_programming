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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
