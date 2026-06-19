#include <stdio.h>

int lower(int c);
int to_decimal(int c);
int power(int base,int p);


int main(){

    char str[] = "AF12456";
    int len = 7;
    char str_lower[len];
    int total = 0;


    for (int i = 0; i < len; i++)
    {
        str_lower[i] = lower(str[i]);
    }

    for (int i = 0; i < len; i++)
    {
        total += to_decimal(str_lower[i]) * power(16,(len - 1 - i));
    }

    printf("%d",total);
    printf("\n");
}

int lower(int c){

    if (c >= 'A' && c <= 'Z'){
        return c - 'A' + 'a';
    }
    else{
        return c;
    }

}

int to_decimal(int c){

    if (c >= 48 && c <= 57){
        return c - '0';
    }else {
        if(c >= 97 && c <= 102){
            return 10 + c - 'a';
        }
    }

}

int power(int base,int p){
    int sum = 1;

    for (int i = 0; i < p; i++)
    {
        sum = base * sum;
    }

    return sum;
}