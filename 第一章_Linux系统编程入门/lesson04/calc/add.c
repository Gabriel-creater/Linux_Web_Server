//静态库制作命令：ar rcs libcalc.a *.o
#include <stdio.h>
#include "head.h"

int add(int a, int b)
{
    return a+b;
}
