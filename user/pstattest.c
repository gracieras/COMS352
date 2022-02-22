#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/pstat.h"

int
main(void)
{
  struct pstat stats;
  getpstat(&stats);
  // print the arrays in stats
  for(int i=0;i<NPROC;i++){
    if(stats.inuse[i]==1){
      printf("inuse");
      printf("%d\n",stats.inuse[i]);

      printf("pid");
      printf("%d\n",stats.pid[i]);

      printf("nice");
      printf("%d\n",stats.nice[i]);
    }
  }
  exit(0);
  return 0;
}
