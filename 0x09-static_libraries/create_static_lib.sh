#!/bin/bash
gcc -c main.c
ar -rc liball.a -L. main.o
