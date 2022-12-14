#include "globals.h"

//Debug switch
//1 = debug || 0 = off
int GLOBAL_DEBUG = 0;

//Test switch
//1 = test || 0 = off
int GLOBAL_TEST = 0;

//Global variables
unsigned long int GLOBAL_COUNT = 0;
int GLOBAL_SAMPLE_RATE = 250;
int GLOBAL_SENSOR_ACTIVE = 1;
const char *GLOBAL_SENSOR_INPUT = NULL;

AnalRes GLOBAL_STATS = {0, 0, 0, 0};

//Global counter
unsigned long int global_count(void) {
    return GLOBAL_COUNT++;
}