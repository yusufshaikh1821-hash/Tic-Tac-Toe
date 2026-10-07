#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("Tic-Tac-Toe\n");

    printf("Note (How to play) : Enter the two numbers\nassociated with the specific grid spot\non grid to enter your choice of 1.\n");

    printf("Playing Grid (3x3)\n");

    int grid[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                printf("%d%d", i, j);
                continue;
            }
            printf("%d%d ", i, j);
        }
        printf("\n");
    }

    char c;
    printf("Enter any character from your keyboard to start the game :-> ");
    scanf("%c", &c);

    printf("Game Started!\n");

    printf("(You : 1\n");
    printf("Computer : 0)\n");

    while (1)
    {
        int c1, c2;
        srand(time(0));
        c1 = (rand() % ((2 - 0) + 1)) + 0;
        srand(time(0));
        c2 = (rand() % ((2 - 0) + 1)) + 0;

        printf("Computer's choice : %d%d\n", c1, c2);

        grid[c1][c2] = 0;

        int y1, y2;
        printf("Enter your choice (1st Number) :-> ");
        scanf("%d", &y1);
        printf("Enter your choice (2nd Number) :-> ");
        scanf("%d", &y2);

        printf("Your choice : %d%d\n", y1, y2);

        grid[y1][y2] = 1;

    }
    return 0;
}