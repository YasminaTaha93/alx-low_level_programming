#include <stdlib.h>
/**
 * malloc_checked - entry point
 * Description: checks allocated memory
 * @b: input to be checked
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *chech;

	check = malloc(b);
	if (check == NULL)
		exit(98);

	return (check);
}
