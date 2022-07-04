#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialzes variable type struct
 * @d: pointer to the dtruct dog type
 * @name: sting literal
 * @age: float
 * @owner: string literal
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d -> name = name;
d -> age = age;
(*d).owner = owner;
}
