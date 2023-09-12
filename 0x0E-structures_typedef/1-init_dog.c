#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - initialize dog
 * @d: struct dog
 * @name: name
 * @age: age 
 * @owner: owner
 * Return: noting
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
