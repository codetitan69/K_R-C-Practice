#include <stdio.h>
#define MAX_LINE_LENGTH 1000

int main(){
    char longest_line[MAX_LINE_LENGTH];
    char buffer[MAX_LINE_LENGTH];

    int l_line_len = 0;
    int buffer_len = 0;

    char c = 0;
    int curr_index = 0;

    for (int i = 0; i < MAX_LINE_LENGTH - 1; i++)
    {
        longest_line[i] = 0;
        buffer[i] = 0;
    }
    // longest_line[MAX_LINE_LENGTH - 1] = '\0';
    // buffer[MAX_LINE_LENGTH - 1] = '\0';       *** so apprently this isnt the correct use this, its supposed to be at the end of characters not at the end of array, and in this particular program there is no need for it, since im not using any str library funcs or printf
    

    while ((c = getchar()) != '~'){

        if (c == '\n'){
            if (buffer_len > l_line_len){
                for (int i = 0; i < buffer_len; i++)
                {
                    longest_line[i] = buffer[i];
                }
                l_line_len = buffer_len;
            }
            // *longest_line = buffer; this is stupid because the subsequent change to buffer array will also modify the longest line.
            curr_index = 0;
            buffer_len = 0;

        }else{
            buffer[curr_index] = c;
            curr_index++;
            buffer_len++;
        }
        
    }

    printf("the longest line is : ");
    for (int i = 0; i < l_line_len; i++)
    {
        putchar(longest_line[i]);
    }
    printf("\n");
}
