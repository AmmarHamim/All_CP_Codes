#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void printBoard();
int checkWin();
//void system();


char board[]= {'0','1','2','3','4','5','6','7','8','9'};
void main()
{
    int player=1,input;
    int status=-1;
    printBoard();


    while(status==-1)
    {
        player=(player%2==0)? 2:1;
        char marking=(player==1)? 'X':'*';

        printf("Enter number for Player %d\n",player);
        scanf("%d",&input);

        if(input<1 || input>9)
            printf("INVALID INPUT\n");

        board[input]=marking;
        printBoard();

        int result=checkWin();
        if(result==1)
        {
            printf("\nPLAYER %d IS THE WINNER\n",player);
            return;
        }

        else if(result==0)
        {
            printf("\nDRAW\n");
            return;
        }


        player++;

    }
}
void printBoard()
{
    system("cls");
    printf("\n");
    printf("===TIC TAC TOE===\n\n");
    printf("      |     |     \n");
    printf("  %c   |  %c  |  %c  \n",board[1],board[2],board[3]);
    printf("  ____|_____|____ \n");
    printf("      |     |     \n");
    printf("  %c   |  %c  |  %c  \n",board[4],board[5],board[6]);
    printf("  ____|_____|____ \n");
    printf("      |     |     \n");
    printf("  %c   |  %c  |  %c  \n",board[7],board[8],board[9]);
    printf("      |     |     \n");
}

int checkWin()
{
    if(board[1]==board[2] && board[2]==board[3])
        return 1;

   else if(board[4]==board[5] && board[5]==board[6])
        return 1;

  else  if(board[7]==board[8] && board[8]==board[9])
        return 1;

  else  if(board[1]==board[4] && board[4]==board[7])
        return 1;

   else if(board[2]==board[5] && board[5]==board[8])
        return 1;

  else  if(board[3]==board[6] && board[6]==board[9])
        return 1;

   else if(board[1]==board[5] && board[5]==board[9])
        return 1;

   else if(board[3]==board[5] && board[5]==board[7])
        return 1;


    //check draw
    int count=0;
    for(int i=1; i<=9; i++)
    {
        if(board[i]=='X' || board[i]=='*')
        {
            count++;
        }
    }
    if(count==9)
        return 0;


    return -1;
}
