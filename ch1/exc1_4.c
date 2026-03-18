#include <stdio.h>

int main(){
    float fahr,celcius;
    float upper,lower,step;

    upper = 100;
    lower = 0;
    step  = 10;

    celcius = lower;

    printf("celcius  -  farenheit\n");

    while (celcius <= upper)
    {
        fahr = (9.0/5.0 * celcius) + 32.0;

        printf("%7.0f  -  %7.2f\n",celcius,fahr);

        celcius = celcius + step;
    }
    
}