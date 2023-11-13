#!/usr/bin/bash
gcc -Wall -c -fPIC *.c 
gcc *.o  -o liball.so 
