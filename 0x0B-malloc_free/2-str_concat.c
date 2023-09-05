#include <stdlib.h>
#include <string.h>

/**
 * str_concat - will concat 2 str
 * @s1: str arg
 * @s2: str arg
 * Return: Null on fail. pointer to new buff on
 * success
 */
char *str_concat(char *s1, char *s2)
{
	int len;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	len = strlen(s1) + strlen(s2) + 1;
	s3 = malloc(sizeof(*s1) * len);
	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3, s1);
	strcat(s3, s2);
	return (s3);
}
