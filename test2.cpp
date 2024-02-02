#include <iostream>
#include <unistd.h>
#include <signal.h>
void func1(int signal)
{
    std::cout << "收到了信号:" << signal << std::endl;
}
int main()
{
    signal(1, func1);
    signal(15, func1);
    // signal(2, SIG_IGN);
    alarm(5);
    for (size_t i = 0; i < 100; i++)
    {
        std::cout << "这是第" << i << "次执行" << std::endl;
        sleep(1);
    }
}