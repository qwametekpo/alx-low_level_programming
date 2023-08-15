#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog's basic info
* @name: First(1) member
* @age: Second(2) member
* @owner: Third(3) member
* Description: Long description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
* dog_t - typedef struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
