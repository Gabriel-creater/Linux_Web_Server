//编译时候用-I选项，指定当前头文件所在文件夹，不然会有错误，命令如下
//gcc main.c -o app -I ./include
//调用指定位置的库进行编译，命令如下
//gcc main.c -o app -I ./include -l calc -L./lib(其中calc为库名，而libcalc.a为库的文件名)
//注意动态链接库使用时候要将其添加进环境变量，系统变量（/etc/profile）或者用户变量(~/.bashrc)均可
#include <stdio.h>
#include "head.h"

int main()
{
    int a = 20;
    int b = 12;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", subtract(a, b));
    printf("a * b = %d\n", multiply(a, b));
    printf("a / b = %f\n", divide(a, b));
    return 0;
}
