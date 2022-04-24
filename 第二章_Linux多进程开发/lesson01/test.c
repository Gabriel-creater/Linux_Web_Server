#include <stdio.h>
#include <unistd.h>

int main()
{
	while(1)
	{
		//特别注意"\n"此处有sleep函数，若没有行刷新标志时
		//则不输出，这里"\n"相当于行刷新标志
		printf("hello!\n");
		sleep(1);
	}
	return 0;
}
