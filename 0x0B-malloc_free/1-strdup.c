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
		return (0);
	}

	len = strlen(str) + 1;
	s = (char *)malloc(sizeof(char) * len);
	strcpy(s, str);

	if (s == NULL)
	{
		return (0);
	}
	return (s);
}
