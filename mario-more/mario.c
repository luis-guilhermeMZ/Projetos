#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);

int main(void)
{
    // Prompt user for height (int)
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    // Print pyramid of that height
    for (int i = 1; i <= height; i++)
    {
        // Print row based on which row
        for (int j = 0; j < height - i; j++)
    {
        printf(" ");
    }
        print_row(i);

        printf("  ");

        print_row(i);

    printf("\n");
    }
}

// Given a number of bricks, print that number of bricks
void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}
