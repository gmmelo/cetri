#include <stdio.h>

// Defining the ASCII characters used to fill CLI output.
#define FILLED_SPACE 35   // #
#define EMPTY_SPACE 58    // :

// Characters defining spaced output
#define SQUARE_LEFT 133   // [
#define SQUARE_RIGHT 135  // ]

// Global constants
#define GRID_WIDTH 12
#define GRID_HEIGHT 14


/* This is the bulk game code. In the future, if the project is pursued, the plan is to modularize aspects and create updated versions. */
int main()
{
    char grid[GRID_HEIGHT][GRID_WIDTH + 1];

    // Clear the grid
    for (int y = 0; y < GRID_HEIGHT; ++y) {
        for(int x = 0; x < GRID_WIDTH; ++x) {
            if (x < GRID_WIDTH - 1)
                grid[x][y] = EMPTY_SPACE;
            else
                grid[x][y] = '\n';
        }
    }

    // Display the double spaced output

}