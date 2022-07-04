#ifndef MAIN_H
#define MAIN_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
/**
 * struct dog - a structure type with elements defined
 * @name: pointer to element that hold dog's name
 * @age: element that holds age
 * @owner: pointer to element that holds owner's name
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;
