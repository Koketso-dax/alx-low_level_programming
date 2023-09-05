#include <stdlib.h>
#include <string.h>

/**
 * _strdup - will duplicate a str
 * @str: input str
 * Return: pointer to mem location on dup
 */
char *_strdup(char *str)
{
	int len = strlen(str);
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * (len + 1));
	strcpy(s, str);

	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
