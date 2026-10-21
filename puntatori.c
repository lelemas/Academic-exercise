//test puntatori
#include <stdio.h>

int main(){
    int x = 10; //variabile normale, contiene 10
    int *p = &x;// p contiene l'indirizzo di x

    printf("%d\n", x); //10 -> valore di x
    printf("%p\n", p); // valore esadecimale dell'indirizzo della loc di mem - valori cambiano in base al compilatore
    printf("%d\n", *p); //10 -> DEREFERENZIO : valore all'indirizzo p

    *p = 25; //modifico il valore di x passando dal puntatore p
    printf("%d\n", x); //stampa 25
}