#include <stdio.h>

int main(){
    int c,ws_count,c_count;
    int dig_count[10];
    char labels[12] = {'0','1','2','3','4','5','6','7','8','9','W','O'};
    
    for (int i = 0; i < 10; i++)
    {
        dig_count[i] = 0;
    }

    ws_count = c_count = 0;

    while ((c = getchar()) != '~')
    {
        if (c >= '0' && c <= '9')
        {
            ++dig_count[c - '0']; // the c - '0' converts the char digit to actual int number of same values,for example if c = '3' we cant directly ++dig_count[c] becuase '3' s ascii value is 51 and that would be out of reference of the array,'3' - '0' would be 51 - 48 = 3 so the ++dig_count[3];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++ws_count;
        }
        else
        {
            ++c_count;
        }
    }

    for (int i = 0; i < 12; i++)
    {
        if (i < 10)
        {
            printf("%C : ",labels[i]);
            for (int j = 0; j < dig_count[i]; j++)
            {
                printf("-");
            }
            printf("\n");
        }
        if (i == 10)
        {
            printf("%C : ",labels[i]);
            for (int j = 0; j < ws_count; j++)
            {
                printf("-");
            }
            printf("\n");
        }
        if (i == 11)
        {
            printf("%C : ",labels[i]);
            for (int j = 0; j < c_count; j++)
            {
                printf("-");
            }
            printf("\n");
        }
    }
}