#include <iostream>
#include <time.h>
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
    exit(0);
}