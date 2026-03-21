#include <stdio.h>
#define IN 1
#define OUT 0


int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    int prev = 0;

    while ((c = getchar()) != 'q') {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t'){
            if (prev != ' ' && prev != '\n' && prev != '\t')
            {
                putchar('\n');
            }

            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            putchar(c);
            ++nw;
        }else
        {putchar(c);}
        prev = c;
    }
    printf("line count - %d\nword count - %d\nchar count - %d\n", nl, nw, nc);

}