#ifndef SIMULATED_ANNEALING
#define SIMULATED_ANNEALING



#include "global.h"
#include "code.h"
#include "time.h"
#include "merge.h"
#include "merge_parallel.h"
#include "misc.h" 
#include "bestfit.h"
#include "read.h"
#include <conio.h>
#include <thread>

bool judge( double score, double new_score );


void simulated_annealing (double end_time);



#endif
