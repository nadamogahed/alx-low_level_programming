#!/bin/bash
# create_static_lib.sh

# Compile all .c files into .o files
gcc -c *.c

# Create a static library called liball.a from all .o files
ar -rc liball.a *.o
