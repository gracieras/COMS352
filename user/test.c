#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
    while(1){
        int c1_pid, c2_pid;     //define children to fork into

        (c1_pid = fork()) && (c2_pid = fork()); // Creates two children

        if (c1_pid == 0) {
            /* Child 1 code goes here */
            nice(14); //sets the nice value to 14
        
        } else if (c2_pid == 0) {
            /* Child 2 code goes here */
            nice(17); //sets the nice value to 17

        } else {
            /* Parent code goes here */
        }
    }
}