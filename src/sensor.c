#include "sensor.h"

#include <stdio.h>
#include <stdlib.h>
#include "globals.h"
#include "utils.h"

//Sensor interface
//This function returns the incoming data
static FILE *file;

int getNextData() {
    int value;

    if (!file)
        file = fopen(GLOBAL_SENSOR_INPUT, "r");

    if ((GLOBAL_SENSOR_ACTIVE = fscanf(file, "%d", &value)) != EOF)
        return value;

    GLOBAL_SENSOR_ACTIVE = 0;
    fclose(file);
    return 0;
}


