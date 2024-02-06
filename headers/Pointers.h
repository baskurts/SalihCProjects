// pre-processor directives

// iclude C header file
#include <stdio.h>

// declare global variables 
// we will be storing their adresses in pointers
static int i = 17;
static double j = 17.55;

// function declarations
void printAddress(void);
int * getAddress(void);
int getDataAtAddress(void);
double storeDataAddress(void);
int getDoubleBytes(void);
int getPointerToDoubleBytes(void);
void pointerToNull(void);
int getIntBytes(void);
int getPointerToIntBytes(void);