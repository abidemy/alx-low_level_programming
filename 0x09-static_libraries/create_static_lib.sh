#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libmy.a *.o
ar -rc liball.a *.o
