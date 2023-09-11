#ifndef DOG_H
#define DOG_H

/**
 * struct dog - particulars of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
 * Description: creating a structure to hold certain parameters
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
