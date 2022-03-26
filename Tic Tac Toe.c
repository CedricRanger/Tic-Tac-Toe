#include<stdio.h>
char ar[]={'0','1','2','3','4','5','6','7','8','9'};
int n,i=-1,player=1;
void board()
{
    printf("   Tic Tac Toe\n\n\n");
    printf("Player 1 is(X) and Player 2 is (O)\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",ar[1],ar[2],ar[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",ar[4],ar[5],ar[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",ar[7],ar[8],ar[9]);
    printf("     |     |     \n");
}
void main()
{
    do
    {
        board();
        player=(player%2?1:2);
        printf("Player %d Enter a number\n",player);
        scanf("%d",&n);
        if(player==1)
        {
            ar[n]='X';
        }
        else
        {
            ar[n]='O';
        }
        player=player-1;
        system("cls");
        checkwin();
    }while(i==-1);
}
void checkwin()
{
    if(ar[1]==ar[2]&&ar[2]==ar[3])
    {
        i=1;
    }
    else if(ar[4]==ar[5]&&ar[5]==ar[6])
    {
        i=1;
    }
    else if(ar[7]==ar[8]&&ar[8]==ar[9])
    {
        i=1;
    }
    else if(ar[1]==ar[4]&&ar[4]==ar[7])
    {
        i=1;
    }
    else if(ar[2]==ar[5]&&ar[5]==ar[8])
    {
        i=1;
    }
    else if(ar[3]==ar[6]&&ar[6]==ar[9])
    {
        i=1;
    }
    else if(ar[1]==ar[5]&&ar[5]==ar[9])
    {
        i=1;
    }
    else if(ar[3]==ar[5]&&ar[5]==ar[7])
    {
        i=1;
    }
    else if(ar[1]!='1'&&ar[2]!='2'&&ar[3]!='3'&&ar[4]!='4'&&ar[5]!='5'&&ar[6]!='6'&&ar[7]!='7'&&ar[8]!='8'&&ar[9]!='9')
    {
        i=0;
    }

    if(i==1)
    {
        board();
        printf("Player %d is the Winner",player+1);
    }
    if(i==0)
    {
        printf("The Match is Draw");
    }
}
