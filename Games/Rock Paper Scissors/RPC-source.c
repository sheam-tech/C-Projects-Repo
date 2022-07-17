#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    int robot,human,num,i,tp_human,tp_robot;
    tp_human=0;
    tp_robot=0;
    printf("Enter how many times you want to play:");
    scanf("%d",&num);
    printf("---------------------Lets start!---------------------");
    printf("\nNote: You will get penalty if you input invalid digits.\n");

    for(i=0; i<num; i++)
    {
        printf("\nChoose your option-\n1.Rock\n2.Paper\n3.Scissor\n\nYour choice is-");
        scanf("%d",&human);
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
        if(human==robot)
        {
            printf("\nDraw!!!");
        }
        else
        {
            if(human==1&&robot==2)
            {
                printf("\nRobot Got 1 point");
                tp_robot=tp_robot+1;
            }
            else if(human==1&&robot==3)
            {
                printf("\nYou Got 1 point");
                tp_human=tp_human+1;
            }
            else if(human==2&&robot==1)
            {
                printf("\nYou Got 1 point");
                tp_human=tp_human+1;
            }
            else if(human==2&&robot==3)
            {
                printf("\nRobot Got 1 point");
                tp_robot=tp_robot+1;
            }
            else if(human==3&&robot==1)
            {
                printf("\nRobot Got 1 point");
                tp_robot=tp_robot+1;
            }
            else if(human==3&&robot==2)
            {
                printf("\nYou Got 1 point");
                tp_human=tp_human+1;
            }else{
            printf("\nInvalid Input!. As a penalty, Its gonna be counted as like draw.");
            }
        }
        printf("\n--------------");
        printf("\n--------------");
        sleep(1);
    }
    winnerfunc(tp_robot,tp_human);
    return 0;
}
