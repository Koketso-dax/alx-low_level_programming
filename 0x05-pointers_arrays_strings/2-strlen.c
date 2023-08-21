/**
 * _strlen - will return the length of the input string
 * @s: input string (array of char)
 * Return: length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != 0)
	{
		x++;
		s++;
	}
	return (x);
}
