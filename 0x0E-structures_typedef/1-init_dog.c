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

void init_dog(struct dog *d, char *name, float age, char *owner) {
    strncpy(d->name, name, sizeof(d->name) - 1);
    d->name[sizeof(d->name) - 1] = '\0';

    d->age = age;

    strncpy(d->owner, owner, sizeof(d->owner) - 1);
    d->owner[sizeof(d->owner) - 1] = '\0';
}
