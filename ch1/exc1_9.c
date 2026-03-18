#include <stdio.h>

int main(){
    int c = getchar();

    int prev;

    while (c != 'q')
    {
        if (prev == ' ' && c == ' ');
        else{
            putchar(c);
        }

        prev = c;
        c = getchar();
    }
}