/**
 * is_palindrome - will determine if str is a palandrome
 * @s: input str
 * Return:1 if true. 0 if false.
 */
int is_palindrome(char *s)
{
	if (*s != '\0')
	{
		if (is_palindrome(s + 1) == is_palindrome(s - 1))
		{
			return (1);
		}
	}
	return (0);
}
