#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
rm -rf *.o
