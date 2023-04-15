#!/bin/bash
gcc -Wall -p:wq

edantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
