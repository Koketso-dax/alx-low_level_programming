#include "main.h"
#include <ctype.h>
/**
 *_islower - entry point for function prototyped in main.h.
 *description: returns 1 if true.
 *@c: input char
 *Return: 1 if true. 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
