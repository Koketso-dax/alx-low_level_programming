/**
 * leet - will encode str into numbers
 * @s: input str
 * Return: Encoded str
 */

char *leet(char *s)
{
	char new_val[128];
	int x;

	new_val['a'] = new_val['A'] = '4';
	new_val['e'] = new_val['E'] = '3';
	new_val['o'] = new_val['O'] = '0';
	new_val['t'] = new_val['T'] = '7';
	new_val['l'] = new_val['L'] = '1';
		for (x = 0; s[x] != '\0'; x++)
		{
			if (new_val[(int)s[x]] != 0)
			{
				s[x] = new_val[(int)s[x]];
			}
		}
		return (s);
}
