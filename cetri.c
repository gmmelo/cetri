#include <stdio.h>

// Defining the ASCII characters used to fill CLI output.
#define FILLED_SPACE 35   // #
#define EMPTY_SPACE 58    // :

// Characters defining spaced output
#define SQUARE_LEFT 91    // [
#define SQUARE_RIGHT 93   // ]

// Global constants
#define GRID_WIDTH 12
#define GRID_HEIGHT 14

void doubleDraw(char (*grid)[GRID_HEIGHT][GRID_WIDTH + 1]);
void drawChatAt(char *symbol);

/* This is the bulk game code. In the future, if the project is pursued, the plan is to modularize aspects and create updated versions. */
int main()
{
    // Create a grid with (y, x) coordinates.
    char grid[GRID_HEIGHT][GRID_WIDTH + 1];

    // Clear the grid
    for (int y = 0; y < GRID_HEIGHT; ++y)
        for(int x = 0; x <= GRID_WIDTH; ++x) {
            if (x < GRID_WIDTH)
                grid[y][x] = EMPTY_SPACE;
            else
                grid[y][x] = '\n';
        }
    
    // Set some example blocks as filled
    // TODO: REMOVE
    grid[4][3] = grid[5][3] = grid[5][4] = grid[6][4] = FILLED_SPACE;
    doubleDraw(&grid);
}

void doubleDraw(char (*grid)[GRID_HEIGHT][GRID_WIDTH + 1]) {
    // Display the double spaced output
    for (int y = 0; y < GRID_HEIGHT; ++y)
        for (int x = 0; x <= GRID_WIDTH; ++x) {
            char currentChar = (*grid)[y][x];
            drawChatAt(&currentChar); 
        }
}

void drawChatAt(char *symbolPtr) {
    char symbol = *symbolPtr;
    switch (symbol)
    {
        case EMPTY_SPACE:
            putchar(EMPTY_SPACE);
            putchar(EMPTY_SPACE);
            break;
        case FILLED_SPACE:
            putchar(SQUARE_LEFT);
            putchar(SQUARE_RIGHT);
            break;
        default:
            putchar('\n');
    }
}