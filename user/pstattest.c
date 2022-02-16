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
}
