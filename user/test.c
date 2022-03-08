#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
    while(1){
        int c1_pid = fork();       //create child 1
        int c2_pid = fork();       //create child 2

        if(c1_pid < 0 || c2_pid < 0){
            exit(1);
        }
        else if (c1_pid == 0) {
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