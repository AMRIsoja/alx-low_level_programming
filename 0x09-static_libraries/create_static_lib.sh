#!/bin/bash

# Compile all .c files into object files (.o)
gcc -c *.c

# Create the static library liball.a from the object files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up - remove the object files
rm -f *.o

