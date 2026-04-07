#ifndef DOG_H
#define DOG_H
/**
* struct dog - save dog info
* dog_t - typedef for struct dog.
* @name: dog name
* @age: dog age
* @owner: stupid dog owner :)
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
