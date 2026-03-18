#include <stdio.h>

int main()
{
    int cnt;
    cnt = 0;

    while (getchar() != EOF){
        ++cnt;
        printf("%d",cnt);
    }
}
