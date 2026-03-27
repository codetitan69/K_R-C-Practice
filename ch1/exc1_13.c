#include <stdio.h>
#define MAX_WORD_SIZE 15

int main(){
    int word_length_freq[MAX_WORD_SIZE + 1];
    int c;
    int in_word = 0;
    int word_length = 0;

    for (int i = 0; i < MAX_WORD_SIZE; i++)
    {
        word_length_freq[i] = 0;
    }
    
    while ((c = getchar()) != '~')
    {
        if (!in_word){
            if (!(c == ' ' || c == '\t' || c == '\n'))  // if char is not whitespace.
            {
                in_word = 1;
                ++word_length;
            }
        }
        else
        {
            if (c == ' ' || c == '\t' || c == '\n')
            {
                in_word = 0;
                ++word_length_freq[word_length];
                word_length = 0;
            }else{
                ++word_length;
            }
        }
    }

    if (word_length != 0)
    {
        ++word_length_freq[word_length];
    }
    putchar('\n');

    for (int i = 1; i <= MAX_WORD_SIZE; i++)
    {
        printf("%3d : ",i);
        for (int j = 1; j <= word_length_freq[i]; j++)
        {
            printf("-");
        }
        printf("\n");
    }
}