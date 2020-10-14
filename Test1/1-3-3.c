#include <stdio.h>

int main(void)
{
    unsigned long l;
    
    union ipaddr
    {
        unsigned long i;
        unsigned char ch[4];
    };
    
    union ipaddr n;
    
    while (scanf("%lu", &n.i) != EOF)
    {
        printf("%lu\n", l);
        printf("%hhu.%hhu.%hhu.%hhu\n",n.ch[3],n.ch[2],n.ch[1],n.ch[0]);
    }
    return 0;
}
