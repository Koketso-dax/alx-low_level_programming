#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all numbers in hex
 *
 * Return: Will be zero on success
 */
int main(void)
{
int x;

for (x = 48; x <= 57; x++)
{
putchar(x);
}
for (x = 97; x <= 102; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
