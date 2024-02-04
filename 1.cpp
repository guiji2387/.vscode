#include <iostream>
#include <time.h>
#include <unistd.h>
int main()
{
    time_t now = time(0);
    tm tmnow;
    atexit([]()
           { std::cout << "hello" << std::endl; });
    atexit([]()
           { std::cout << "world" << std::endl; });
    localtime_r(&now, &tmnow);
    std::cout << tmnow.tm_hour << " " << tmnow.tm_min << std::endl;
//     exit(0);
    int ret = execl("/home/guiji2387/vscodefile/.vscode/vscode/test001", "/home/guiji2387/vscozdefile/.vscode/vscode/test001", 0);
    perror("execl");
//     return 0;
}