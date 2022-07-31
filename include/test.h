#ifndef TEST_H
#define TEST_H

#include <stdio.h>

//Test structure
typedef struct Test {
    FILE *file; //file
    char *name; //name of test (displayname)
    int value1; //expected value
    int value2; //if two values pr line in testfile
    int read;    //EOF indicator
    int errors; //number of errors found
} Test;

//Test filters
extern Test TEST_LOW;
extern Test TEST_HIGH;
extern Test TEST_DER;
extern Test TEST_SQR;
extern Test TEST_MWI;

//Test Rpeak
extern Test TEST_RPEAK;

//Test functions
void run_TestPeak(Test *t, char *name, char *filename, int actual1, int actual2);

void run_TestFilter(Test *t, char *name, char *filename, int actual);

//Printing functions
void testResults();


#endif
