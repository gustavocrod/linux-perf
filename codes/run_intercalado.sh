#!/bin/bash

for counter in $(seq 1 3); do 
    echo "fibonacci"
    sudo perf stat -a -e cycles,r013c,page-faults,cache-misses,sched:sched_switch ./fibonacci; 
    echo "bubble sort"
    sudo perf stat -a -e cycles,r013c,page-faults,cache-misses,sched:sched_switch ./bubble_sort;
done
