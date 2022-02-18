#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/syscall.h"

int
main(int argc, char *argv[])
{
    int nicevalue = atoi(argv[1]);
    
    sys_nice(nicevalue);

    char **arr = (char **)&argv[3];
    exec(argv[2], arr);
}