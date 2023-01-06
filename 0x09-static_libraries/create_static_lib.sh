#!/bin/bash
rm liball.a
gcc -c *.c
ar -rc liball.a *.o
