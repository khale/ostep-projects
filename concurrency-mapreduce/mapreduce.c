#include "mapreduce.h"


void
MR_Emit (char * key, char * value)
{
    // FILL ME IN
}


unsigned long
MR_DefaultHashPartition (char * key, int num_buckets)
{
    // FILL ME IN 
    return -1;
}


void
MR_Run (int argc, char * argv[],
        Mapper map, int num_mappers,
        Reducer reduce, int num_reducers,
        Partitioner partition)
{
    // FILL ME IN
}
