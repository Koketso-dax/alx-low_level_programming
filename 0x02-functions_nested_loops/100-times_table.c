#include <stdio.h>
#include "main.h"
/**
 * print_times_table - implements overloaded function in main.h
 * @n: input number
 * description: prints out times table of input
 */

void print_times_table(int n)
{
    int a, b;

    if (n < 0 || n > 15)
        return;

    for (a = 0; a <= n; a++)
    {
        for (b = 0; b <= n; b++)
        {
            int rep = a * b;

            if (b == 0)
                _putchar('0' + rep);
            else if (rep < 10)
                _putchar(' '), _putchar(' '), _putchar('0' + rep);
            else if (rep < 100)
                _putchar(' '), _putchar('0' + rep / 10), _putchar('0' + rep % 10);
            else
                _putchar('0' + rep / 100), _putchar('0' + (rep / 10) % 10), _putchar('0' + rep % 10);

            if (b < n)
                _putchar(','), _putchar(' ');
        }
        _putchar('\n');
    }
}
