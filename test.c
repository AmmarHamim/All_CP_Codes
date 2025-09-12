 #include <stdio.h>
#include <stdlib.h> //for system() function
#include <conio.h>

void printBoard();
int checkWin();

char board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main()
{
    int player = 1, input;
    int status = -1;

    printBoard();

    while(status==-1)
    {
        player=(player % 2 == 0) ? 2 : 1;
        char marking=(player==1) ? 'X' : '*';

        printf("Enter number for Player %d: ", player);
        scanf("%d",&input);

        //check input
        if (input<1 || input>9)
        {
            printf("INVALID INPUT. Please enter a number between 1 and 9.\n");
            continue;
        }

        // check if the cell is already marked
        if (board[input]=='X' || board[input]=='*')
        {
            printf("Cell already marked. Please choose another cell.\n");
            continue;
        }

        board[input]=marking;
        printBoard();

        int result=checkWin();
        if (result==1)
        {
            printf("\nPLAYER %d IS THE WINNER\n", player);
            return 0;
        }
        else if (result==0)
        {
            printf("\nDRAW\n");
            return 0;
        }

        player++;
    }
    return 0;
}

void printBoard()
{
    system("cls");
    printf("\n");
    printf("===TIC TAC TOE===\n\n");
    printf("      |     |     \n");
    printf("  %c   |  %c  |  %c  \n", board[1], board[2], board[3]);
    printf("  ____|_____|____ \n");
    printf("      |     |     \n");
    printf("  %c   |  %c  |  %c  \n", board[4], board[5], board[6]);
    printf("  ____|_____|____ \n");
    printf("      |     |     \n");
    printf("  %c   |  %c  |  %c  \n", board[7], board[8], board[9]);
    printf("      |     |     \n");
}

int checkWin()
{
    //check rows
    if (board[1]==board[2] && board[2]==board[3])
        return 1;
    if (board[4]==board[5] && board[5]==board[6])
        return 1;
    if (board[7]==board[8] && board[8]==board[9])
        return 1;

    //check columns
    if (board[1]==board[4] && board[4]==board[7])
        return 1;
    if (board[2]==board[5] && board[5]==board[8])
        return 1;
    if (board[3]==board[6] && board[6]==board[9])
        return 1;

    //check diagonals
    if (board[1]==board[5] && board[5]==board[9])
        return 1;
    if (board[3]==board[5] && board[5]==board[7])
        return 1;

    //check draw
    int count=0;
    for (int i=1;i<=9;i++)
    {
        if (board[i]=='X' || board[i]=='*')
        {
            count++;
        }
    }
    if (count==9)
        return 0;

    return -1;
}
