#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -o lliball.so *.o
