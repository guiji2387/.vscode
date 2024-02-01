#include "func1.h"
#include <iostream>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>
#include <cstring>
#include <cerrno>
#include <unistd.h>
int main()
{
    mkdir("/home/guiji2387/vscodefile/.vscode/ vscode/1/guiji", 0755);
    std::cout << errno << ":" << strerror(errno) << std::endl;

    perror("调用mkdir失败");
}
