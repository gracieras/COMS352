#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
// #include "kernel/proc.c"

int
main(int argc, char *argv[])
{
    int nicevalue;
    if (atoi(argv[1]) >= -20 || atoi(argv[1]) <= 19)
    {
        nicevalue = atoi(argv[1]);
        nice(nicevalue);
        printf("test1");
        //exit(1);
    }
    
    printf("test2");
    char **arr = (char **)&argv[2];
    exec(argv[2], arr);
    exit(0);
}