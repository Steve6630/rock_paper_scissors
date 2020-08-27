#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockpaperscissor(char you, char com);

int rockpaperscissor(char you, char com)
{
    //Return 0 if draw, 1 if won and -1 if lost
    //Draw condition
    if(you==com)
    {
        return 0;
    }
    //Non Draw condition
    if(you=='r' && com=='s')
    {
        return 1;
    }
    else if(you=='s' && com=='r')
    {
        return -1;
    }
    if(you=='s' && com=='p')
    {
        return 1;
    }
    else if(you=='p' && com=='s')
    {
        return -1;
    }
    if(you=='p' && com=='r')
    {
        return 1;
    }
    else if(you=='r' && com=='p')
    {
        return -1;
    }
}

int main()
{
    int you,com;
    srand(time(0));
    int num = rand()%100 + 1;
    if(num<=33)
    {
        com='r';
    }
    else if(num>33 && num<=66)
    {
        com='p';
    }
    else
    {
        com='s';
    }
    printf("Enter 'r' for rock, 'p' for paper, and 's' for scissor:\n");
    scanf("%c",&you);
    int result = rockpaperscissor(you, com);
    printf("You choose %c and the computer choose %c\n",you, com);
    if(result==0)
    {
        printf("Game Draw\n");
    }
    else if(result==1)
    {
        printf("Game Won\n");
    }
    else if(result==-1)
    {
        printf("Game Lost\n");
    }
    return 0;
}