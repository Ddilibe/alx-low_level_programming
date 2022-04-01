#!/bin/bash
#The start of the command
gcc -c *.c
# The command above is used to create object files of all c codes contained in the directory
ar -rc liball.a *.o
# This command is used to create a archive of all the object codes in the pressent directory. Liball.a is the name given to the archive.
nm liball.a
# The command above os used to index the archived codes. Liball.a still remains the arhive name
