#!/bin/bash
gcc -c -Wall -Werror -pedantic -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
