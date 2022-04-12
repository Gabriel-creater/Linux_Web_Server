#include <stdio.h>

int main()
{
    int a = 10;
    //宏参数的编译选项使用：gcc test.c -D DEBUG -o test
    #ifdef DEBUG
    printf("我是一个程序猿，我不会爬树。。。\n");
    #endif
    for(int i = 0;i < 3;i++)
    {
        printf("hello,GCC!!!\n");
    }


    return 0;
}