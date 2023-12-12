#include <string.h>
/**
 * _strcpy - will copy a str from a source pointer to a destination
 * @dest: pointer address of destination buffer
 * @src: pointer address of source
 * Return: pointer to mem of dest str.
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		*(dest + x) = src[x];
		x++;
	}
	*(dest + x) = '\0';
	return (dest);
}
