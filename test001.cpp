#include "func1.h"
#include <iostream>
#include <dirent.h>
#include <time.h>
#include <unistd.h>
int main()
{
    char file[100];
    getcwd(file, 100);
    char *File = get_current_dir_name();
    std::cout << File << std::endl;
    free(File);
    
}
