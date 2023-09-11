#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the content in dog struct
 * @d: dog struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
