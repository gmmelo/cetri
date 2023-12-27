#include <stdio.h>

/* This is the bulk game code. In the future, if the project is pursued, the plan is to modularize aspects and create updated versions. */

// Defining the ASCII characters used to fill CLI output.
#define FILLED_SPACE 35   // #
#define EMPTY_SPACE 58    // :
#define GRID_WIDTH 12
#define GRID_HEIGHT 14

int main()
{
    char grid[GRID_HEIGHT][GRID_WIDTH + 1];

    for (int y = 0; y < GRID_HEIGHT; ++y) {
        for(int x = 0; x < GRID_WIDTH; ++x) {
            if (x < GRID_WIDTH - 1)
                grid[x][y] = EMPTY_SPACE;
            else
                grid[x][y] = '\n';
        putchar(grid[x][y]);
        }
    }
}