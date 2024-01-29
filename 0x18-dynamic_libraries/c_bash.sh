#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -pedantic -Wextra -fPIC -c c_operations.c

# Create the dynamic library liball.so
gcc -shared -o 100-operations.so c_operations.o

# Display the symbols in the dynamic library
nm -D --defined-only 100-operations.so
