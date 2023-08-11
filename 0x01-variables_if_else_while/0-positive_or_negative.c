#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*	main - main program in which all other fucntions will be called from.
 *
 *	return: since the function return int void, the function will terminate when zero is returned.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive");
	}
	else if (n < 0)
	{
	printf("%d is negative");
	}
	else if (n == 0)
	{
	printf("is zero");
	}
	return (0);
}
