#include <stdio.h>

//条件编译
#define CHANGE 1

int main()
{
    char s1[30];
    int i;
    printf("Input:\n");
    scanf("%s",&s1);
    printf("Output:\n");
    if (CHANGE) //判断条件
    {
        for (i = 0; i < 30; i++)
            if (s1[i] != '\0')
            {
                if (s1[i] != ' ')
                {
                    if (s1[i] >= 'a' && s1[i] <= 'z')
                        s1[i] = s1[i]-32;
                    else if (s1[i] >= 'A' || s1[i] <= 'Z')
                        s1[i] += 32;
                }
            }
    }
    printf("%s", s1); //输出结果
    return 0;
}