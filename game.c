#include<stdio.h>
int main()
{
    char ch;
    int bot;
    printf("Enter r for rock,p for paper and s for sicssor= ");
    scanf("%c",&ch);
    if(ch=='r')
    {
        printf("You choose rock");
    }
    else if(ch=='p')
    {
        printf("You choose paper");
    }
    else if(ch=="s")
    {
        printf("You choose scissor");
    }
    else
    {
        printf("Invalid letter");
    }
    srand(time(NULL));
    bot = rand() % 3;
    switch (bot)
    {
    case 0:
        printf("bot choose paper  ");
        break;
    case 1:
        printf("bot choose rock ");
        break;
    case 2:
        printf("bot choose sicssor  ");
        break;
    }
    return 0;
}
