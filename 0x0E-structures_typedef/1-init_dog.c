#include "dog.h"

/**
* init_dog - inits a variable of
* type dog
* @d: dog identification
* @name: name of dog
* @age: age of dog
* @owner: owner's name
*/

 * init_dog - initializes a structure of type dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*d)
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
