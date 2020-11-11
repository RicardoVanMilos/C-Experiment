#include <stdio.h>
#include <string.h>

int oct();
int dec();
int hex();
void toLower();

char str[1024];

int main(void)
{
    memset(str, 0, sizeof(str));
    while (gets(str))
    {
        toLower();
        printf("%s",str);
        if (str[0] < '0' || str[0] > '9')
        {
            printf("No");
            continue;
        }
        switch (str[0])
        {
        case '0':
            if (strlen(str) == 1)
                printf("Yes");
            else
            {
                if (str[1] == 'x')
                {
                    if (hex())
                        printf("Yes");
                    else
                        printf("No");
                }
                else if (oct())
                    printf("Yes.");
                else
                    printf("No");
                break;
            }
        default:
            if (dec())
                printf("Yes");
            else
                printf("No");
            break;
        }
    }
    return 0;
}

int oct()
{
    for (int i = 1; i < strlen(str); i++)
        if (str[i] < '0' || str[i] > '7')
            return 0;
    return 1;
}

int hex()
{
    for (int i = 2; i < strlen(str); i++)
        if (str[i] < '0' || str[i] > 'f' || (str[i] > '9' && str[i] < 'a'))
            return 0;
    return 1;
}

int dec()
{
    for (int i = 1; i < strlen(str); i++)
        if (str[i] < '0' || str[i] > '9')
            return 0;
    return 1;
}

void toLower()
{
    for (int i = 0; i < strlen(str); i++)
        if (str[i] >= 'A' || str[i] <= 'Z')
            str[i] = (char)(str[i] + 32);
}
