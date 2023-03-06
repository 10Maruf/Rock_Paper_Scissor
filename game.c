// hello! I am Maruf;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor(char you, char comp)
{

    if (you == comp)
    {
        return 0;
    }

    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }

    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }

    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
}
int main()
{
    int t = 5;
    int myscore = 0, comscore = 0;
    while (t--)
    {
        char you, comp;

        srand(time(0));
        int number = rand() % 100 + 1;

        if (number < 33)
        {
            comp = 'r';
        }
        else if (number > 33 && number < 66)
        {
            comp = 'p';
        }
        else
        {
            comp = 's';
        }

        printf("Enter 'r' for Rock, 'p' for Paper and 's' for Scissor\n");
        scanf("%c", &you);
        getchar();
        int result = rockpaperscissor(you, comp);
        if (result == 0)
        {
            printf("---------------------Game draw!--------------------\n");
        }
        else if (result == 1)
        {
            printf("\033[32m *************************You Win!**********************************\033[0m\n");
            myscore++;
        }
        else
        {
            printf("\033[31m xxxxxxxxxxxxxxxxxxxxxxxxYou Lose!xxxxxxxxxxxxxxxxxxxxxxxxxxxxx\033[0m\n");
            comscore++;
        }
        printf("You chose %c and computer chose %c.\n ", you, comp);
    }
    printf("  ###################################################\n");
printf("   #      Your Score            Bot Score            #\n");
printf("   #      ___________          ____________          #\n");
printf("   #                                                 #\n");
printf("   #         %d                     %d                 #\n",myscore,comscore);
printf("   #                                                 #\n");
printf("   #                                                 #\n");
printf("   #                                                 #\n");
printf("   ###################################################\n");

    return 0;
}