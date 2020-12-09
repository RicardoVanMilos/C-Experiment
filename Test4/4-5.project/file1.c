/*源文件file1.c的内容*/
#include "file.h"

int x; //全局变量声明
int y;
char ch;

int main(void)
{
    x = 10;
    y = 20;
    ch = getchar();
    printf("in file1 x=%d,y=%d,ch is %c\n", x, y, ch);
    func1();
    return 0;
}
