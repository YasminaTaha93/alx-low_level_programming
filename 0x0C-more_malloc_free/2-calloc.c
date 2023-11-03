#include <stdlib.h>
/**
 * _calloc - entry point
 * Description: allocate memory for array
 * @nmemb: user input
 * @size: user input
 * Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		str[i] = 0;

	return (str);
}
