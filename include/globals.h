#ifndef GLOBALS_H
#define GLOBALS_H

//includes
#include <stdio.h>

//public variables
extern int GLOBAL_DEBUG;
extern int GLOBAL_TEST;
extern unsigned long int GLOBAL_COUNT;
extern int GLOBAL_SAMPLE_RATE;
extern int GLOBAL_SENSOR_ACTIVE;
extern const char *GLOBAL_SENSOR_INPUT;

typedef struct {
    unsigned errors;
    unsigned low_pressure;
    unsigned irregular_heartbeat;
    double pulse_min;
    double pulse_max;
} AnalRes;

extern AnalRes GLOBAL_STATS;

//public prototypes
unsigned long int global_count();

#endif