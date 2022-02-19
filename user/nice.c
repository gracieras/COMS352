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
        exit(1);
    }
    
    
    //char **arr = (char **)&argv[2];
    exec(argv[2], &argv[3]);
    exit(0);
}