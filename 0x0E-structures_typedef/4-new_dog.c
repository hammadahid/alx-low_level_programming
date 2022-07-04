#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: string literal
 * @owner: string literal
 * @age: float
 * Return: NULL if functions fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i;
int _strlen_name = 0;
int _strlen_owner = 0;
char *copy_name;
char *copy_owner;
dog_t *_new_dog;
for (i = 0; name[i] != '\0'; i++)
{
;
}
i = _strlen_name;
copy_name = malloc(sizeof(char) * _strlen_name + 1);
if (copy_name == NULL)
{
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
{
copy_name[i] = name[i];
}
copy_name[i] = '\0';
for (i = 0; name[i] != '\0'; i++)
{
;
}
i = _strlen_owner;
copy_owner = malloc(sizeof(char) * _strlen_owner + 1);
if (copy_owner == NULL)
{
return (NULL);
}
for (i = 0; owner[i] != '\0'; i++)
{
copy_owner[i] = owner[i];
}
copy_owner[i] = '\0';
_new_dog->name = name;
if (name == NULL)
{
return (NULL);
}
_new_dog -> owner = owner;
if (name == NULL)
{
return (NULL);
}
_new_dog -> age = age;
return (_new_dog);
}
