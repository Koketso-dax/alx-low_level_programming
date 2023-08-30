/**
 * _strlen_recursion - will calculate the length on a str recursively
 * @s: input str
 * Return: numerical length of str
 */
int _strlen_recursion(char *s)
{
	int tot = 0;

	if(*s != '\0')
	{
		tot++;
		tot += _strlen_recursion(s + 1);
	}
	return tot;
}
