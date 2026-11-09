//puntatore a funzione come parametro di funzione
#include <stdio.h>

int somma(int a, int b);
int sottrai(int a, int b);
int moltiplica(int a, int b);
//set di funzioni che verranno chiamate attraverso calcola
int calcola(int a, int b, int(*funz)(int, int));

int main(){
    int risSomma = calcola(6, 3, somma);
    printf("somma : %d\n", risSomma);//9

    int risSottrai = calcola(6, 3, sottrai);
    printf("sottrai : %d\n", risSottrai);//3

    int risMoltiplica = calcola(6, 3, moltiplica);
    printf("moltiplica : %d\n", risMoltiplica);//18
}


int somma(int a, int b){return a + b;}
int sottrai(int a, int b){return a - b;}
int moltiplica(int a, int b){return a * b;}

// calcola non sa quale operazione farà: lo decide chi la chiama.
// Riceve l'indirizzo di una funzione in funz e la esegue passandole a e b.
// (*funz)(a, b) e funz(a, b) sono equivalenti: entrambe chiamano
// la funzione puntata.
// La funzione passata come parametro si chiama CALLBACK.
int calcola(int a, int b, int(*funz)(int, int)){
    return (*funz)(a, b);
    //semplicemente la chiamata di funzione con il puntatore a funzioni
}

//QUESTA è UNA VERSIONE SEMPLICE E PIù COMPATTA DELL'ESERCIZIO BUBBLE(..., ..., ASCENDING) DELLA LEZIONE