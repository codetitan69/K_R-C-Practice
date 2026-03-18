#include <stdio.h>

int main(){
    float fahr,celcius;
    float upper,lower,step;

    upper = 220;
    lower = 0;
    step  = 10;

    fahr = lower;

    printf("farenheit  -  celcius\n");

    while (fahr <= upper)
    {
        celcius = 5.0/9.0 * (fahr - 32.0);

        printf("%9.0f  -  %7.2f\n",fahr,celcius);

        fahr = fahr + step;
    }
    
}