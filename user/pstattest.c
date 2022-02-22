#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/pstat.h"

int
main(void)
{
  struct pstat stats;         //creating a struct pstat
  getpstat(&stats);           //call the syscall and pass in the just created struct by pointer

  // print the arrays in stats
  for(int i=0;i<NPROC;i++){   //loop through every i
    if(stats.inuse[i]==1){    //if stats is in use, print the arrays
      printf("inuse: ");
      printf("%d \n",stats.inuse[i]);

      printf("pid: ");
      printf("%d \n",stats.pid[i]);

      printf("nice: ");
      printf("%d \n",stats.nice[i]);
    }
  }
  exit(0);
  return 0;
}
