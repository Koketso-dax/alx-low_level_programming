#include <stdlib.h>
#include <string.h>
/**
 * argstostr - returns *ptr -> str or Null if fail
 * @ac: num of args
 * @av: [] of args
 * Return: ptr* to str output or NULL on fail.
 */
char *argstostr(int ac, char *av[])
{
	int len = 0;
	int x;
	char *str;

	if (ac <= 1 || av == NULL)
	{
		return (NULL);
	}

	for (x = 1; x < ac; x++)
	{
		len += strlen(av[x]) + 1;
	}

	str = (char *)malloc(len);

	if (str == NULL)
	{
		return (NULL);
	}

	str[0] = '\0';

	for (x = 1; x < ac; x++)
	{
		strcat(str, av[x]);
		if (x < (ac - 1))
		{
			strcat(str, "\n");
		}
	}

	strcat(str, "\n");

	return (str);
}
