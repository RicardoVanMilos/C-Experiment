#include <stdio.h>
#define CHANGE 1

int main()
{
    char s1[30];
    int i;
    printf("Input:\n");
    // gets(s1);
    printf("Output:\n");
    if (CHANGE)
    {
        for (i = 0; i < 30; i++)
            if (s1[i] != '\0')
            {
                if (s1[i] != ' ')
                {
                    if (s1[i] >= 'a' && s1[i] <= 'z')
                        s1[i] -= 32;
                    else if (s1[i] >= 'A' || s1[i] <= 'Z')
                        s1[i] += 32;
                }
            }
    }
    printf("%s", s1); //输出结果
    return 0;
}