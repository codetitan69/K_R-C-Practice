#include <stdio.h>
#define MAX_LINE_LENGTH 1000

void reverse (char s[],int len);

int main(){
    char c;
    char str[MAX_LINE_LENGTH];
    int curr_index = 0;

    for (int i = 0; i < MAX_LINE_LENGTH; i++)
    {
        str[i] = 0;
    }

    while ((c = getchar()) != '~'){

        if (c == '\n'){
            str[curr_index + 1] = '\0';
            reverse(str,curr_index + 1);

            for (int i = 0; i < curr_index + 1; i++)
            {
                printf("%c",str[i]);
            }
            printf("\n\n");
            curr_index = 0;

            for (int i = 0; i < MAX_LINE_LENGTH; i++)
            {
                str[i] = 0;
            }

        }else{
            str[curr_index] = c;
            curr_index++;
        }
        
    }

}

void reverse(char s[],int len){ // the len is length of str doesnt include \0 or trailing whitespace or gibbersish.
    int swap_limit;

    swap_limit = len / 2;

    // if (((len / 2)) * 2 == len){ // by def any operation involving 2 ints results in int so 7/2 would be 3 rather than 3.5 , and 3 *2 = 6 , 6 == 7 not equal , its just checking if len is even or odd
    //     swap_limit = len/2;
    // }else{
    //     swap_limit = len/2 - 1;
    // } useless and wrong

    for (int i = 0;i < swap_limit;i++){
        s[i] = s[i] ^ s[(len - 1) - i];
        s[(len - 1) - i] = s[i] ^ s[(len - 1) - i];
        s[i] = s[i] ^ s[(len - 1) - i];
        // printf("%s",s[i]); apprently %s is not to be used for single characters,only for string , this was causing a seg fault and i couldnt figure it out without gpt.
    }
}