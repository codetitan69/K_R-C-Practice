#include <stdio.h>

int main()
{
    int a = -1;
    int b = 1;
    int temp = 0;

    int step = 20;
    int count = 0;


    while (count <= step) {
        printf("%i\n",a + b);
        temp = a + b;
        a = b;
        b = temp;
        count++;
    }
}
