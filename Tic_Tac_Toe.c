#include <stdio.h>

int main()
{

    printf("Tic-Tac-Toe\n");

    printf("Note (How to play) : Enter the two numbers associated\nwith the specific grid spot on grid\nto enter your choice of 0 or 1.\n");

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

    printf("(User 1 : 1\n");
    printf(" User 2 : 0)\n");

    int u1=0, u2=0;

    int u11, u12;
    printf("Enter your choice (1st Number) :-> ");
    scanf("%d", &u11);
    printf("Enter your choice (2nd Number) :-> ");
    scanf("%d", &u12);

    printf("User 1 choice : %d%d\n", u11, u12);

    grid[u11][u12] = 1;

    for (int i=0;i<4;i++)
    {

        int u21, u22;
        printf("Enter your choice (1st Number) :-> ");
        scanf("%d", &u21);
        printf("Enter your choice (2nd Number) :-> ");
        scanf("%d", &u22);

        printf("User 2 choice : %d%d\n", u21, u22);

        grid[u21][u22] = 0;

        printf("Enter your choice (1st Number) :-> ");
        scanf("%d", &u11);
        printf("Enter your choice (2nd Number) :-> ");
        scanf("%d", &u12);

        printf("User 1 choice : %d%d\n", u11, u12);

        grid[u11][u12] = 1;


        if (grid[0][0] == 1 && grid[0][1] == 1 && grid[0][2] == 1 || grid[1][0] == 1 && grid[1][1] == 1 && grid[1][2] == 1 || grid[2][0] == 1 && grid[2][1] == 1 && grid[2][2] == 1 || grid[0][0] == 1 && grid[1][0] == 1 && grid[2][0] == 1 || grid[0][1] == 1 && grid[1][1] == 1 && grid[2][1] == 1 || grid[0][2] == 1 && grid[1][2] == 1 && grid[2][2] == 1 || grid[0][0] == 1 && grid[1][1] == 1 && grid[2][2] == 1 || grid[0][2] == 1 && grid[1][1] == 1 && grid[2][0] == 1)
        {
            u1+=1;
            printf("Game Over!\n");
            printf("User 1 Wins!\n");
            break;
        }
        if (grid[0][0] == 0 && grid[0][1] == 0 && grid[0][2] == 0 || grid[1][0] == 0 && grid[1][1] == 0 && grid[1][2] == 0 || grid[2][0] == 0 && grid[2][1] == 0 && grid[2][2] == 0 || grid[0][0] == 0 && grid[1][0] == 0 && grid[2][0] == 0 || grid[0][1] == 0 && grid[1][1] == 0 && grid[2][1] == 0 || grid[0][2] == 0 && grid[1][2] == 0 && grid[2][2] == 0 || grid[0][0] == 0 && grid[1][1] == 0 && grid[2][2] == 0 || grid[0][2] == 0 && grid[1][1] == 0 && grid[2][0] == 0)
        {
            u2+=1;
            printf("Game Over!\n");
            printf("User 2 Wins!\n");
            break;
        }
    }

    if(u1 || u2){
        printf("Thank You!");
    }
    else{
        printf("Tied!");
    }

    return 0;
}