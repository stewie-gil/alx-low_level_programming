#!bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar rc liballa.a *.o
ranlib liballa.a