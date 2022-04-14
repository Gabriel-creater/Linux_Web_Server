#定义变量
#此处表示获取指定目录下指定文件的名称，此处即为获取当前目录下所有.c文件
#*.c也即add.c div.c main.c sub.c mult.c
src = $(wildcard ./*.c)

#此处表示查取第三个参数中的文件类型通过次函数从此类型转换为第二个参数的类型，
#第一个参数表示第三个文件的参数类型,此处即为将所有.c文件转换为.o文件返回
objs = $(patsubst %.c, %.o, $(src))

target = app
$(target) : $(objs)
	$(CC) $(objs) -o $(target)
#app: add.o div.o main.o mult.o sub.o 
#	gcc add.o div.o main.o mult.o sub.o -o app

#通配符的使用，代替下面所示所有代码，$<表示第一个依赖文件的名称，$@表示目标的完整名称
%.o: %.c
	$(CC) -c $< -o $@

#add.o: add.c
#	gcc -c add.c -o add.o
#div.o: div.c
#	gcc -c div.c -o div.o
#main.o: main.c
#	gcc -c main.c -o main.o
#mult.o: mult.c
#	gcc -c mult.c -o mult.o
#sub.o: sub.c
#	gcc -c sub.c -o sub.o


#clean为伪目标，不会生成文件，所以前面加一个.PHONY
.PHONY: clean

#删除中间文件，依赖，也即所有的*.o文件
clean:
	rm $(objs) -f