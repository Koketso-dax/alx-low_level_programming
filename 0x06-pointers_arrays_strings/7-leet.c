/**
 * leet - will encode str into numbers
 * @s: input str
 * Return: Encoded str
 */

char *leet(char *s)
{
	int x, y;
	int size = 5;
	char up_map[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char low_map[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char num_map[] = {'4', '3', '0', '7', '1', '\0'};

	for (x = 0; s[x] != '\0'; ++x)
	{
		for (y = 0; y < size; y++)
		{
			if (s[x] == up_map[y] || s[x] == low_map[y])
			{
				s[x] = num_map[y];
			}
		}
	}
	return (s);
}
