// pre-processor directives 

// create macro expression (constant)
// converts a temp from celsius to fahrenheit
#define FAHRENHEIT(temp) (temp * 1.8 + 32)

// include C header files
#include <stdio.h>
#include <string.h>

// function declarations 
void congratulate1(char *, char *, char *);
void congratulate2(char *, char *, char *);
float fahrenheitFromCelcius(float);