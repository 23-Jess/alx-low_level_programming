#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char name dog
 * @age: age
 * @owner: pointer to char owner dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
/*d->name = name;*/
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
