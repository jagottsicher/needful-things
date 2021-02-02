# needful-things

## A hand-picked toolbox full of useful implementations for C programming which comes in the shape of a header file

### Overview

This is a little collection of useful and eventually needful tools which I realised to use over in different projects and while learning over again and again.

Actually, amongst others it includes:
* an implementation of wait ms (with opotion to continue waiting remaining time (uses nanosleep)
* an easy to handle random number generator for integers in a range from min to max
* clear the screen (with escape sequences, terminal only)

### Integration
Needful things comes with a header file and a correspending .c as implementation of several funtions. The header file includes information how the functions work, what arguments they expect and what kind of data they return. As all external header files in C it must be included with <code>#include "needful-things.h"</code>. 

Made with love and fun!
