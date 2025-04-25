#include<stdio.h>

//SUZZ-Programming...

int check_win();
char pos[]={'0','1','2','3','4','5','6','7','8','9'};
void system(); 
void Board();
void logic_of_game();
void massage();
void instruction();

int main()
{
    int ch;
    while (1)
    {
        massage();
        scanf("%d",&ch);
        switch (ch)
        {
            case 1 :logic_of_game();
                    break;
            case 2 :instruction();
                    break;
            case 3 :exit(0); 
            default:printf("\nEnter Correct Choise!!!");
                    break;
        }
    }
    return 0;
}

void Board()
{
    system("cls");
    printf("\t\t<---TIC TAC TOE--->\n");
    printf("\t\t     |      |     \n");
    printf("\t\t  %c  |   %c  |  %c  \n",pos[1],pos[2],pos[3]);
    printf("\t\t_____|______|_____\n");
    printf("\t\t     |      |     \n");
    printf("\t\t  %c  |   %c  |  %c   \n",pos[4],pos[5],pos[6]);
    printf("\t\t_____|______|_____\n");
    printf("\t\t     |      |     \n");
    printf("\t\t  %c  |   %c  |  %c   \n",pos[7],pos[8],pos[9]);
    printf("\t\t     |      |     \n");
}

void massage()
{
    printf("\n\t---------------- MENU LIST ----------------\n");
    printf("\n\tHow to play , check help first.. \n");
    printf("\nWelcome Two Player Game Hub---created maintain & powered by --Subhradeep Ray\nCopyright All right reserved. ");
    printf("\n\t::::Avalible Game::::\n\n\t1.Tic Tac Toe\n\n\tUpdate Later!\n\n");
    printf("\n\tPress 1 for Start The Tic Tac Toe game\n");
    printf("\n\tPress 2 Help \n");
    printf("\n\tPress 3 Exit \n");
    printf("\n\nEnter Your Choice::--->>>");
}
int check_win()
{
    int count=0;
    if (pos[1]==pos[2] && pos[2]==pos[3]){
        return 1;
    }
    if (pos[1]==pos[4] && pos[4]==pos[7]){
        return 1;
    }
    if (pos[7]==pos[8] && pos[8]==pos[9]){
        return 1;
    }
    if (pos[3]==pos[6] && pos[6]==pos[9]){
        return 1;
    }
    if (pos[1]==pos[5] && pos[5]==pos[9]){
        return 1;
    }
    if (pos[3]==pos[5] && pos[5]==pos[7]){
        return 1;
    }
    if (pos[2]==pos[5] && pos[5]==pos[8]){
        return 1;
    }
    if (pos[4]==pos[5] && pos[5]==pos[8]){
        return 1;
    }
    for (int i = 0; i <=9; i++)
    {
        if (pos[i]=='X'||pos[i]=='O')
        {
            count++;
        }
    }
    if (count==9)
    {
        return 0;
    }
    return -1;    
}

void logic_of_game()
{
   int player=1,input,decider=-1,ch;
    Board();
    while (decider==-1)
    {
        player=(player%2==0)?2:1;
        char sign=(player==1) ?'X':'O';
        printf("\n\nEnter Position For Player %d---->>>>>",player);
        scanf("%d",&input);
        if (input<1 || input>9)
        {
            printf("\n\nInvalid Choice!!!!\n\n");
        }
        pos[input]=sign;
        Board();
        int result=check_win();
    if (result==1)
    {
        int s;
        printf("\t\tPlayer %d is the Winner!!!\n",player);
        printf("\nThank you to play this game !!!\nsupports us...");
        printf("\nRate our game<0-5> ...");
        scanf("%d",&s);
        if (s==5)
        {
            printf("Thanks For %d Review!!",s);
        }
        else
        {
            printf("We try our best next time!!");
        }
            return;
    }
    else if (result==0)
    {
        int s;
        printf("\t\tDraw!!!\n");
        printf("\nThank you to play this game !!!\nsupports us...");
        printf("\nRate our game<0-5> ...");
        scanf("%d",&s);
        if (s==5)
        {
            printf("Thanks For %d  Review!!",s);
        }
        else
        {
            printf("We try our best next time!!");
        }
        return 0;
    }
    player++;
    }
}

void instruction()
{
    printf("\n\t----INSTRUCTION----\n\nHow The Board Look Like:--->>>>\n");
    printf("\n\t<---TIC TAC TOE BOARD--->\n");
    printf("\t        |      |     \n");
    printf("\t     1  |   2  |  3  \n");
    printf("\t   _____|______|_____\n");
    printf("\t        |      |     \n");
    printf("\t     4  |   5  |  6   \n");
    printf("\t   _____|______|_____\n");
    printf("\t        |      |     \n");
    printf("\t     7  |   8  |  9   \n");
    printf("\t        |      |     \n");
    printf("\n\n\tPlayer1-X\n\tPlayer2-O\n\n Here show an example of player turns.....\n");
    printf("\t        |      |     \n");
    printf("\t     X  |   2  |  O  \n");
    printf("\t   _____|______|_____\n");
    printf("\tA position use one time only\n");
    printf("\tWhen This type Situation occur where 3 position remians same Then Player 1 or 2 Win!!\n");
    printf("\t        |      |     \n");
    printf("\t     X  |   2  |  3  \n");
    printf("\t   _____|______|_____\n");
    printf("\t        |      |     \n");
    printf("\t     4  |   X  |  6   \n");
    printf("\t   _____|______|_____\n");
    printf("\t        |      |     \n");
    printf("\t     7  |   8  |  X   \n");
    printf("\t        |      |     \n");
    printf("I hope now You able to play this game !!!");
}