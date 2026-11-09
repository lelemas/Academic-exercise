//puntatori  a funzioni parte 1, puntatore chiama 2 funzioni diverse
#include <stdio.h>

int somma(int a, int b);
int sottrai(int a, int b);

int main(){
    //puntatore punta a funzione
    int (*op)(int, int) = somma;
    int pippo = op(2,3);//(*op)(2,3); sono equivalenti, chiama somma tramite pippo

    printf("puntatore a prima funzione : %d\n", pippo);
    //qui non faccio altro che riassegnare al puntatore un'altra funzione : sottrai
    op = sottrai;

    //int(*op)(int, int) = sottrai;
    int pluto = (*op)(2, 3);//op(2, 3); è equivalente, chiama sottrai tramite pluto
    printf("puntatore a seconda funzione : %d\n", pluto);
}

int somma(int a, int b){
    return a + b;
}

int sottrai(int a, int b){
    return a - b;
}