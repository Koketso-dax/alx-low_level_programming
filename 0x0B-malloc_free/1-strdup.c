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
	char *s = (char *)malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
