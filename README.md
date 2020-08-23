# C_Programming_King

Solutions to exercises in C Programming K.N. King 2nd Edition

Second edition published 2008.

Covers up to C99 standard.


## Compiling C program in VS Code terminal (Linux and GCC)


To compile in VS Code terminal: gcc -O -Wall -std=c18 filename.c

Compile options:

 -Wall -> Compiler produces warning messages (all in this case). (Use with -O)
 
 -O -> Combine with -Wall for maximum effect.
 
 -pedantic -> Issue all warnings required by C standard.
 
 -ansi -> Turn off GCC features not part of standard C
 
 -std=c18 -> Which version compiler should use
 
 -o -> name of output file. (a.out) is default.


 ### Example:
 
 gcc -O -Wall -pedantic -ansi -std=c18 -o fname fname.c

 -> Compiled file is fname, just type ./fname to run compiled program in Linux.

 -> So in vscode terminal, first type gcc command to compile program.

 -> Then run ./fname or ./a.out (if file name for compiled program not specified), 
    again in terminal in vscode to run compiled program.
