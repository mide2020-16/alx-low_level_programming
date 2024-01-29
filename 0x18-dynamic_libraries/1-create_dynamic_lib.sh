#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -pedantic -Wextra -fPIC -c *.c

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Display the symbols in the dynamic library
nm -D --defined-only liball.so
