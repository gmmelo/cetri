/* This is the bulk game code. In the future, if the project is pursued, the plan is to modularize aspects and create updated versions. */

#include <stdio.h>

// Defining the ASCII characters used to fill CLI output.
#define FILLED_SPACE 35   // #
#define EMPTY_SPACE 58    // :

int main()
{
    for(int i = 0; i <= 10; i++) {
        if(i < 5) {
            putchar(FILLED_SPACE);
        }
        else {
            putchar(EMPTY_SPACE);
        }
    }
}