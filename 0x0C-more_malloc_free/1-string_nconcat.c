#include <stdlib.h>
/**
 * string_nconcat - entry point
 * Description: concatenate 2 strings
 * @s1: user input
 * @s2: user input
 * @n: user input
 * Return: pointer to allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1l = 0, s2l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1l] != '\0')
		s1l++;

	while (s2[s2l] != '\0')
		s2l++;

	if (n > s2l)
		n = s2l;

	str = malloc(s1l + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1l; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		str[i + s1l] = s2[i];
	}
	str[i + s1l] = '\0';

	return (str);
}
