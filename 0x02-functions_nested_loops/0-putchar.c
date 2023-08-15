#include "main.h"

/**
 * Main - will print out _putchar followed by a new line.
 * 
 * Return: Should be 0 to indicate success.
 */

int main(void)
{
	char word[] = "_putchar";
	int x = 0;

	while(word[x] != '\0')
	{
		char w = word[x];
		_putchar(w);
		x++;
	}
	return(0);	
}
