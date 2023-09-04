#include <stdio.h>
#include <stdlib.h>
/** 
 * main - will return product of  2 int
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	if ((argc - 1) == 2)
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (1);
}
