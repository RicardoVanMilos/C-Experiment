/*源文件file1.c的内容*/
#include "file.h"

extern int x, y; /* 外部变量的定义性说明 */
extern char ch;  /* 外部变量的定义性说明 */
int x;
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
