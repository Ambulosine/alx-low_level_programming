#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic -std=gnu89 -fpic *.c 
gcc -shared -o libdynamic.so *.o
gcc -c -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
gcc -o main main.o libdynamic.so
sudo mv libdynamic.so /usr/lib/
sudo ldconfig
