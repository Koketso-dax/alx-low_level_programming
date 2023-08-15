#include "main.h"
#include <stdio.h>
/**
 * Main - will print out _putchar followed by a new line.
 * 
 * Return: Should be 0 to indicate success.
 */

int main(void)
{
char word[] = "_putchar";
int x = 0;

while(word[x] != EOF)
{
	_putchar(word[x]);
	x++;
}
printf('\n');
return(0);	
}
