#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void (*p[8])();

void task0()
{
    printf("task0 is called!\n");
}
void task1()
{
    printf("task1 is called!\n");
}
void task2()
{
    printf("task2 is called!\n");
}
void task3()
{
    printf("task3 is called!\n");
}
void task4()
{
    printf("task4 is called!\n");
}
void task5()
{
    printf("task5 is called!\n");
}
void task6()
{
    printf("task6 is called!\n");
}
void task7()
{
    printf("task7 is called!\n");
}

void scheduler(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i] - 48)
        {
        case 0:
            p[i] = task0;
            break;

        case 1:
            p[i] = task1;
            break;

        case 2:
            p[i] = task2;
            break;

        case 3:
            p[i] = task3;
            break;

        case 4:
            p[i] = task4;
            break;
            
        case 5:
            p[i] = task5;
            break;

        case 6:
            p[i] = task6;
            break;

        case 7:
            p[i] = task7;
            break;

        default:
            break;
        }
    }
}

void execute(int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i]();
    }
}

int main()
{
    char tk[255];
    scanf("%s", tk);
    scheduler(tk);
    execute(strlen(tk));
    return 0;
}