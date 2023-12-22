#编译的目标文件
all: libfunc1.a \
     libfunc1.so
#编译依赖
libfunc1.a:func1.h func1.cpp
	g++ -c -o libfunc1.a func1.cpp -I /home/test1/.vscode
#
libfunc1.so:func1.h func1.cpp 
	g++ -fPIC -shared -o libfunc1.so func1.cpp -I /home/test1/.vscode
#clean用于清理编译目标文件
clean:
	rm -f libfunc1.a libfunc1.so

