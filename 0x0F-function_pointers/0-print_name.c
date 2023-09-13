/**
 * print_name - will print a name
 * @name: input name
 * @f: callback function to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
