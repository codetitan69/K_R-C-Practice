#include <stdio.h>

int main(){
    int c = getchar();

    while (c != 'q')
    {
        if (c == '\t'){
            putchar('\\');
            putchar('t');
        }
        if (c == '\b'){
            putchar('\\');
            putchar('b');
        }
        if (c == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else{
            putchar(c);
        }

        c = getchar();
    }
}