#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    int bot;
    printf("Enter r for rock,p for paper and s for sicssor= ");
    scanf("%c",&ch);
    srand(time(NULL));
    bot = rand() % 3;
    /** It is written to print the user and bot choice */
    if(ch=='r')
    {
        printf("You choose rock\n");
        switch (bot)
    {
    case 0:
        printf("bot choose paper\n  ");
        break;
    case 1:
        printf("bot choose rock \n");
        break;
    case 2:
        printf("bot choose sicssor\n  ");
        break;
    }
    }
    else if(ch=='p')
    {
        printf("You choose paper\n");
        switch (bot)
    {
    case 0:
        printf("bot choose paper  \n");
        break;
    case 1:
        printf("bot choose rock \n");
        break;
    case 2:
        printf("bot choose sicssor\n  ");
        break;
    }
    }
    else if(ch=='s')
    {
        printf("You choose scissor\n");
        switch (bot)
    {
    case 0:
        printf("bot choose paper  \n");
        break;
    case 1:
        printf("bot choose rock \n");
        break;
    case 2:
        printf("bot choose sicssor\n  ");
        break;
    }
    }
    else
    {
        printf("Invalid letter\n");
    }
    /**It is written to determine whether the bot won or lose */
    if(ch=='r')
    {
        if(bot==0)
        {
            printf("Bot lose");
        }
        else if(bot==1)
        {
            printf("Its a draw");
        }
        else{
            printf("Bot won");
        }
    }
    else if(ch=='p')
    {
        if(bot==0)
        {
            printf("Its a draw");
        }
        else if(bot==1)
        {
            printf("Bot won");
        }
        else{
            printf("Bot lose");
        }
    }
    else if(ch=='s')
    {
        if(bot==0)
        {
            printf("Bot won");
        }
        else if(bot==1)
        {
            printf("Bot lose");
        }
        else{
            printf("Its a draw");
        }
    }

    return 0;
}
