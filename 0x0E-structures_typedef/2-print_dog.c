#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints a struct dog
* @d: pointer to struct dog
* Return: no return
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		/**
		* if (*d).name? true : false
		*/
		printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
	}
}
