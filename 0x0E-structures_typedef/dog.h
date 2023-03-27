#ifndef DOG_H
#define DOH_H


/**
 * struct dog - dog structure
 * @name: parameter 1
 * @age: parameter 2
 * @owner: parameter 3
 */


struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
