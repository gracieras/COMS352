#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    int nicevalue;
    if (atoi(argv[1]) >= -20 || atoi(argv[1]) <= 19) //testing to see if nicevalue is in bounds
    {
        nicevalue = atoi(argv[1]); //turns the nice value into an int
        nice(nicevalue); //sets the nice value
    }
    
    char **arr = (char **)&argv[2];
    exec(argv[2], arr); //executes the dynamic program
    exit(0);
}