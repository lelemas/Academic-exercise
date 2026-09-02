//sommo tutti i pari fino a 100
#include <stdio.h>


int main(){
    int sum = 0;

    //ciclo che incrementa di 2
    for(unsigned int x = 2; x <= 100; x += 2){

        sum += x;

    }
    //stampo somma
    printf("%s\t%d\n", "Somma :", sum);
}