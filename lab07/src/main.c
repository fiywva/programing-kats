#include <stdio.h>

#define N "IMAOOOS"//n==nick
#define N_LGTH 7//numb elemens

void get_n() {				//1 function
    char n[N_LGTH] = N;
    for(int i = 0; i < N_LGTH; i++) //use lab06
    {
        if(n[i] == 'A' || n[i] == 'a') {
            n[i] = '@';
        }
        if(n[i] == 'O' || n[i] == 'o') {
            n[i] = '0';
        }
        if(n[i] == 'I' || n[i] == 'i') {
            n[i] = '1';
        }
        if(n[i] == 'S' || n[i] == 's') {
            n[i] = '$';
}
    }
    printf("%s\n", n); //print result
}

int main() {  //use 2 function 
    get_n();
}
