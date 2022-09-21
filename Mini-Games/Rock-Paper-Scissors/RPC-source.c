#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
void winnerfunc(int robo,int hum)
{

    if(robo>hum)
    {
        printf("\nTotal Points:\nRobot-%d\nYou-%d\n---------------------You lost in the game!---------------------",robo,hum);
    }
    else if(hum>robo)
    {
        printf("\nTotal Points:\nYou-%d\nRobot-%d\n---------------------Congatulations! You won!---------------------",hum,robo);
    }
    else if(hum==robo)
    {
        printf("\nTotal Points:\nYou-%d\nRobot-%d\n---------------------Match Draw!!!---------------------",hum,robo);
    }
}
int main()
{
    int robot,num,i,tp_human,tp_robot,repeat;
    char human;
    printf("\n\n--------------------------------Welcome to the Rock-Paper-Scissor Game!--------------------------------\n\n");
    start:
    tp_human=0;
    tp_robot=0;
    printf("Enter how many times you want to play:");
    scanf("%d",&num);
    fflush(stdin);
    printf("\n---------------------Lets start!---------------------\n");
    printf("\nNote: You will get penalty if you input invalid characters.\n\n");

    for(i=0; i<num; i++)
    {   fflush(stdin);
        printf("\nChoose your option-\nr. Rock\np. Paper\ns. Scissor\n\nYour choice is-");
        scanf("%c",&human);
        srand(time(NULL));
        robot=((rand()%3)+1);
        if(robot==1)
        {
            printf("Robot choosed Rock\n");
        }
        else if(robot==2)
        {
            printf("Robot choosed Paper\n");
        }
        else if(robot==3)
        {
            printf("Robot choosed Scissor\n");
        }

            if((human=='r'&&robot==1)||(human=='p'&&robot==2)||(human=='s'&&robot==3))
        {
            printf("\nDraw!!!");
        }
           else if(human=='r'&&robot==2)
            {
                printf("\nRobot Got 1 point");
                tp_robot=tp_robot+1;
            }
            else if(human=='r'&&robot==3)
            {
                printf("\nYou Got 1 point");
                tp_human=tp_human+1;
            }
            else if(human=='p'&&robot==1)
            {
                printf("\nYou Got 1 point");
                tp_human=tp_human+1;
            }
            else if(human=='p'&&robot==3)
            {
                printf("\nRobot Got 1 point");
                tp_robot=tp_robot+1;
            }
            else if(human=='s'&&robot==1)
            {
                printf("\nRobot Got 1 point");
                tp_robot=tp_robot+1;
            }
            else if(human=='s'&&robot==2)
            {
                printf("\nYou Got 1 point");
                tp_human=tp_human+1;
            }else{
            printf("\nInvalid Input!. As a penalty, Its gonna be counted as like draw.");
            }



        printf("\n--------------");
        printf("\n--------------");
        sleep(1);
    }
    winnerfunc(tp_robot,tp_human);
    printf("\n\n--------------------------------\n\n");
    sleep(1);
    printf("Want to Play Again?\n1. Yes\nEnter any other key to exit\n");
    scanf("%d",&repeat);
    if(repeat==1){
        goto start;
    }else{
        printf("Thank You!\nCopyright@sheam");
         return 0;
    }

}
