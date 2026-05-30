#include <stdio.h>

double Convert_to_celcius(double farenheit);  // protype so we dont get implicit declaration error

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
        celcius = Convert_to_celcius(fahr);

        printf("%9.0f  -  %7.2f\n",fahr,celcius);

        fahr = fahr + step;
    }
    
}

double Convert_to_celcius(double farenheit){
    return 5.0/9.0 * (farenheit - 32.0);
}
// 1.15 use a func fot temp prog