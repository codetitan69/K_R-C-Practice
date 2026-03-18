#include <stdio.h>

int main(){
    int t_count = 0,s_count = 0,n_count = 0;

    int c;
    c = getchar();

    while (c != 'q')
    {
        if (c == '\t')
            ++t_count;
        if (c == '\n')
            ++n_count;
        if (c == ' ')
            ++s_count;

        c = getchar();
    }
    
    printf("tab count - %d,\nspace count - %d,\nnew line count - %d\n",t_count,s_count,n_count);
}