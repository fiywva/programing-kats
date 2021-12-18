#include<stdio.h>
#define TXTLENG 5
int main() {
     
    char nick[TXTLENG] = { 'I', 'M', 'A', 'O', 'O' }; //создаю массив  с тхт элементами 
    for(int i = 0; i < TXTLENG; i++) // создаю цикл для  проверки каждого элемента массива на причастной к случаям указаных ниже

    {
        if(nick[i] == 'A' || nick[i] == 'a') {   //через if прописываю случаи замены элементов массива 
            nick[i] = '@';
        }
        if(nick[i] == 'O' || nick[i] == 'o') {
            nick[i] = '0';
        }
        if(nick[i] == 'I' || nick[i] == 'i') {
            nick[i] = '1';
        }
        if(nick[i] == 'S' || nick[i] == 's') {
            nick[i] = '$';
        }
    }
return 0;
}
