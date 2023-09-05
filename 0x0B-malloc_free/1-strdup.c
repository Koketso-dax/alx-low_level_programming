#include <stdlib.h>
#include <string.h>

/**
 * _strdup - will duplicate a str
 * @str: input str
 * Return: pointer to mem location on dup
 */
char *_strdup(char *str)
{
	unsigned int len;
	char *s;

	if (str == NULL)
	{
		return (0);
	}

	len = strlen(str) + 1;
	s = malloc(sizeof(char) * len);

	if (s == NULL)
	{
		return (0);
	}
	strcpy(s, str);
	return (s);
}
