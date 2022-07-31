//
// Created by thomasf on 22/05/08.
//

#include "ecglib.h"
#include "debug.h"

#include <stdio.h>

#include "globals.h"
#include "sensor.h"
#include "peaks.h"
#include "filter.h"

unsigned ecg_process_file(const char *filename) {
    GLOBAL_SENSOR_INPUT = filename;
    //Loop that holds program alive
    //as long as the sensor is getting data

    while (GLOBAL_SENSOR_ACTIVE) {

        //Next value from the sensor
        int next = getNextData();
        //Data after filtering
        int filteret = filter(next);
        //Detection function - returns 1 if Rpeak detected
        int detected = detection(filteret);

        //Increment global count variable
        global_count();
    }

    return 0;
}