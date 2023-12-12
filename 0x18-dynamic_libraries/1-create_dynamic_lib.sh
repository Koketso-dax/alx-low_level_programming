#!/bin/bash
gcc -c -pedantic -Wall -Werror -Wextra -fPIC *.c
gcc -shared -o liball.so *.o
