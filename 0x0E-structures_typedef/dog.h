#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - particulars of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
 *
 * Description: creating a structure to hold certain parameters
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H */
