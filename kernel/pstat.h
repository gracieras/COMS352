/**
* Adapted from https://github.com/remzi-arpacidusseau/ostepprojects/tree/master/scheduling-xv6-lottery
**/
#ifndef _PSTAT_H_
#define _PSTAT_H_
#include "param.h"
struct pstat {
 int inuse[NPROC]; // whether this slot of the process table is in use (1 or 0)
 int pid[NPROC]; // the PID of each process
 int nice[NPROC]; // the nice value of the process

 int runtime[NPROC]; // number of ticks process has been on CPU
 int stride[NPROC]; // the stride calculated from nice
 int pass[NPROC]; // the pass value used by the stride scheduler
};
#endif // _PSTAT_H_
