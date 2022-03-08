#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
    int c1_pid, c2_pid;     //define children to fork into

    (c1_pid = fork()) && (c2_pid = fork()); // Creates two children

    if (c1_pid == 0) {
        /* Child 1 code goes here */
    } else if (c2_pid == 0) {
        /* Child 2 code goes here */
    } else {
        /* Parent code goes here */
    }
}