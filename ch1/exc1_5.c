#include <stdio.h>
#define UPPER 200
#define LOWER 0
#define STEP 10

int main(){
    float fahr,celcius;
    float upper,lower,step;

    printf("celcius  -  farenheit\n");
    for (celcius = UPPER; celcius >= LOWER; celcius = celcius - STEP)
    {
        printf("%7.0f  -  %7.2f\n",celcius,(9.0/5.0 * celcius) + 32.0);
    }
}