#include <stdlib.h>
#include <string.h>

/**
 * _strdup - will duplicate a str
 * @str: input str
 * Return: pointer to mem location on dup
 */
char *_strdup(char *str)
{
	int len;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str) + 1;
	s = malloc(sizeof(char) * len);
	strcpy(s, str);

	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
