#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - will concat 2 str using malloc
 * @s1: 1st input str
 * @s2: 2nd input str
 * @n: number of bytes to copy from s2
 * Return: Concat of s1 && s2 or null on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len, len1, len2, x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	len = len1 + n + 1;
	s3 = malloc(sizeof(char) * len);

	if (s3 == NULL)
	{
		return (0);
	}

	for (x = 0; s1[x]; x++)
	{
		s3[x] = s1[x];
	}
	for (x = 0; x < n && s2[x]; x++)
	{
		s3[len1 + x] = s2[x];
	}
	s3[len] = '\0';
	return (s3);
}
