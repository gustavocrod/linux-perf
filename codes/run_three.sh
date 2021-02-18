#!/bin/bash

for counter in $(seq 1 3); do 
    sudo perf stat -a -e cycles,r013c,page-faults,cache-misses,sched:sched_switch ./fibonacci; 
done 
