#!/bin/bash

# Compile each .c file into .o object files
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library liball.a from the .o files
ar rc liball.a *.o

# Clean up by removing the .o files
rm -f *.o

echo "Static library liball.a created successfully!"
