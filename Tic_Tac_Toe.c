#include <stdio.h>

int main()
{

    printf("Tic-Tac-Toe\n");

    printf("Note (How to play) : Enter the number associated\nwith the specific grid spot on the grid\nto enter your choice of 1 or 0.\n");

    printf("Playing Grid (3x3)\n");

    int grid[3][3];

    int k = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                printf("%d", k);
                continue;
            }
            printf("%d ", k);
            k++;
        }
        k++;
        printf("\n");
    }

    char c;
    printf("Enter any character from your keyboard to start the game :-> ");
    scanf("%c", &c);

    printf("Game Started!\n");

    printf("(User 1 : 1\n");
    printf(" User 2 : 0)\n");

    int u1 = 0, u2 = 0;

    int user1;

    printf("User 1\n");

    printf("Enter your choice :-> ");
    scanf("%d", &user1);

    printf("User 1's choice : %d\n", user1);

    switch (user1)
    {

    case 1:
        grid[0][0] = 1;
        break;

    case 2:
        grid[0][1] = 1;
        break;

    case 3:
        grid[0][2] = 1;
        break;

    case 4:
        grid[1][0] = 1;
        break;

    case 5:
        grid[1][1] = 1;
        break;

    case 6:
        grid[1][2] = 1;
        break;

    case 7:
        grid[2][0] = 1;
        break;

    case 8:
        grid[2][1] = 1;
        break;

    case 9:
        grid[2][2] = 1;
        break;
    }

    for (int i = 0; i < 4; i++)
    {

        int user2;

        printf("User 2\n");

        printf("Enter your choice :-> ");
        scanf("%d", &user2);

        printf("User 2's choice : %d\n", user2);

        switch (user2)
        {

        case 1:
            grid[0][0] = 0;
            break;

        case 2:
            grid[0][1] = 0;
            break;

        case 3:
            grid[0][2] = 0;
            break;

        case 4:
            grid[1][0] = 0;
            break;

        case 5:
            grid[1][1] = 0;
            break;

        case 6:
            grid[1][2] = 0;
            break;

        case 7:
            grid[2][0] = 0;
            break;

        case 8:
            grid[2][1] = 0;
            break;

        case 9:
            grid[2][2] = 0;
            break;
        }

        printf("User 1\n");

        printf("Enter your choice :-> ");
        scanf("%d", &user1);

        printf("User 1's choice : %d\n", user1);

        switch (user1)
        {

        case 1:
            grid[0][0] = 1;
            break;

        case 2:
            grid[0][1] = 1;
            break;

        case 3:
            grid[0][2] = 1;
            break;

        case 4:
            grid[1][0] = 1;
            break;

        case 5:
            grid[1][1] = 1;
            break;

        case 6:
            grid[1][2] = 1;
            break;

        case 7:
            grid[2][0] = 1;
            break;

        case 8:
            grid[2][1] = 1;
            break;

        case 9:
            grid[2][2] = 1;
            break;
        }

        if (grid[0][0] == 1 && grid[0][1] == 1 && grid[0][2] == 1 || grid[1][0] == 1 && grid[1][1] == 1 && grid[1][2] == 1 || grid[2][0] == 1 && grid[2][1] == 1 && grid[2][2] == 1 || grid[0][0] == 1 && grid[1][0] == 1 && grid[2][0] == 1 || grid[0][1] == 1 && grid[1][1] == 1 && grid[2][1] == 1 || grid[0][2] == 1 && grid[1][2] == 1 && grid[2][2] == 1 || grid[0][0] == 1 && grid[1][1] == 1 && grid[2][2] == 1 || grid[0][2] == 1 && grid[1][1] == 1 && grid[2][0] == 1)
        {
            u1 += 1;
            printf("Game Over!\n");
            printf("User 1 Wins!\n");
            break;
        }
        if (grid[0][0] == 0 && grid[0][1] == 0 && grid[0][2] == 0 || grid[1][0] == 0 && grid[1][1] == 0 && grid[1][2] == 0 || grid[2][0] == 0 && grid[2][1] == 0 && grid[2][2] == 0 || grid[0][0] == 0 && grid[1][0] == 0 && grid[2][0] == 0 || grid[0][1] == 0 && grid[1][1] == 0 && grid[2][1] == 0 || grid[0][2] == 0 && grid[1][2] == 0 && grid[2][2] == 0 || grid[0][0] == 0 && grid[1][1] == 0 && grid[2][2] == 0 || grid[0][2] == 0 && grid[1][1] == 0 && grid[2][0] == 0)
        {
            u2 += 1;
            printf("Game Over!\n");
            printf("User 2 Wins!\n");
            break;
        }
    }

    if (u1 || u2)
    {
        printf("Thank You!");
    }
    else
    {
        printf("Game Over!\n");
        printf("Tied!\n");
        printf("Thank You!");
    }

    return 0;
}