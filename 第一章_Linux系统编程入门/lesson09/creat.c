/*
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

    int open(const char* pathname,int flags,mode_t mode);
        参数：
            -pathname:要创建的文件和路径
            -flags:对文件的操作权限和其他的设置
                -必选项：O_ODONLY,O_WRONLY,O_RDWR这三个之间是互斥的
                -可选项：O_CREAT文件不存在，创建新文件
            -mode:八进制的数，表示创建除的新的文件的操作权限，比如：0775
            最终的权限是：mode & ~umask
            0777    ->  111111111
            & 0775  ->  111111101
            ----------------------------
            按位与：0与任何数都为0
            umask的作用就是抹去某些权限。

            flags参数是一个Int类型的数据，占4个字节，32位。
            flags32个位，每一位就是一个标志位。

*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    //创建一个新的文件
    int fd = open("creat.txt",O_RDWR|O_CREAT,0777);

    if(fd == -1)
    {
        perror("open");
    }

    //关闭
    close(fd);

    return 0;
}
