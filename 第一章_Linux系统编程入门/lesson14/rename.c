/*
   #include <stdio.h>
   int rename(const char *oldpath, const char *newpath);
         作用：重命名一个目录/移动文件从老路径到新路径
         参数：
            -oldpath:旧名字/老路径
            -newpath:新名字/新路径
        返回值：
            成功返回0，失败返回-1


*/

#include <stdio.h>

int  main()
{
    int ret = rename("aaa","./../lesson13/aaa");//此代码即为目录移动
    int ret = rename("aaa","bbb");//这句代码即为重命名目录

    if(ret == -1)
    {
        perror("rename");
        return -1;
    }

    return 0;
}