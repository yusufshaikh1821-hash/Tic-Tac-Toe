#include <stdio.h>

void grid3x3(char *);
void grid3x3(char *grid)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                printf("%c", *grid);
                break;
            }
            printf("%c | ", *grid);
            grid++;
        }
        printf("\n");
        grid++;
    }
}

int main()
{
    printf("Tic-Tac-Toe\n");

    printf("How to play : Enter the number associated with\nthe specific grid spot on the grid to\nenter your choice of X or O.\n");

    printf("User 1 : X\nUser 2 : O\n");

    char c;
    printf("Enter any character from your keyboard to start the game :-> ");
    scanf("%c", &c);

    printf("Game Started!\n");

    char grid[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            grid[i][j] = '.';
        }
    }
    grid3x3(&grid[0][0]);

    char x = 'X', o = 'O';
    int u1 = 0, u2 = 0;
    int user1;
    int user2;
    int same;

    for (int i = 0; i < 5; i++)
    {
        if (i <= 4)
        {
            do
            {
                same = 0;
                printf("User 1 :-> ");
                scanf("%d", &user1);
                if (user1 == user2 || user1 < 1 || user1 > 9)
                {
                    same++;
                }
            } while (same);
            switch (user1)
            {
            case 1:
                grid[0][0] = x;
                break;
            case 2:
                grid[0][1] = x;
                break;
            case 3:
                grid[0][2] = x;
                break;
            case 4:
                grid[1][0] = x;
                break;
            case 5:
                grid[1][1] = x;
                break;
            case 6:
                grid[1][2] = x;
                break;
            case 7:
                grid[2][0] = x;
                break;
            case 8:
                grid[2][1] = x;
                break;
            case 9:
                grid[2][2] = x;
                break;
            }
            grid3x3(&grid[0][0]);
            if (grid[0][0] == x && grid[0][1] == x && grid[0][2] == x || grid[1][0] == x && grid[1][1] == x && grid[1][2] == x || grid[2][0] == x && grid[2][1] == x && grid[2][2] == x || grid[0][0] == x && grid[1][0] == x && grid[2][0] == x || grid[0][1] == x && grid[1][1] == x && grid[2][1] == x || grid[0][2] == x && grid[1][2] == x && grid[2][2] == x || grid[0][0] == x && grid[1][1] == x && grid[2][2] == x || grid[0][2] == x && grid[1][1] == x && grid[2][0] == x)
            {
                u1++;
                break;
            }
            if (i == 4)
            {
                break;
            }
        }

        do
        {
            same = 0;
            printf("User 2 :-> ");
            scanf("%d", &user2);
            if (user2 == user1 || user2 < 1 || user2 > 9)
            {
                same++;
            }
        } while (same);
        switch (user2)
        {
        case 1:
            grid[0][0] = o;
            break;
        case 2:
            grid[0][1] = o;
            break;
        case 3:
            grid[0][2] = o;
            break;
        case 4:
            grid[1][0] = o;
            break;
        case 5:
            grid[1][1] = o;
            break;
        case 6:
            grid[1][2] = o;
            break;
        case 7:
            grid[2][0] = o;
            break;
        case 8:
            grid[2][1] = o;
            break;
        case 9:
            grid[2][2] = o;
            break;
        }
        grid3x3(&grid[0][0]);
        if (grid[0][0] == o && grid[0][1] == o && grid[0][2] == o || grid[1][0] == o && grid[1][1] == o && grid[1][2] == o || grid[2][0] == o && grid[2][1] == o && grid[2][2] == o || grid[0][0] == o && grid[1][0] == o && grid[2][0] == o || grid[0][1] == o && grid[1][1] == o && grid[2][1] == o || grid[0][2] == o && grid[1][2] == o && grid[2][2] == o || grid[0][0] == o && grid[1][1] == o && grid[2][2] == o || grid[0][2] == o && grid[1][1] == o && grid[2][0] == o)
        {
            u2++;
            break;
        }
    }

    printf("Game Over!\n");

    if (u1 != 1 && u2 != 1)
    {
        printf("Tied!\n");
    }
    else if (u1)
    {
        printf("User 1 Wins!\n");
    }
    else if (u2)
    {
        printf("User 2 Wins!\n");
    }

    printf("Thank You!");

    return 0;
}