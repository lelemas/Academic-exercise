//creo una calcolatrice attraverso l'utilizzo di un array di puntatori a funzione
//in base all'indice dell'array viene chiamata una f diversa
#include <stdio.h>

//prototipo di f
int somma(int a, int b);
int sottrai(int a, int b);
int moltiplica(int a, int b);
int dividi(int a, int b);


int main(){
    int (*array[4])(int a, int b) = {somma, sottrai, moltiplica, dividi};
    //in questo modo ho creato un array di 4 puntatori a funzione

    unsigned int a;//var in cui salvo la lettura input dell'utente
    puts("0 per somma, 1 per sottrai, 2 per moltiplica, 3 dividi");
    scanf("%u", &a);

    if(a >= 0 && a <= 3){
        //col controllo se l'utente inserisce un valore valido allora
        //stampa la stringa sotto chiamando il puntatore a funzione 
        //scegliendo in base al valore dell'utente
        printf("scelta %u ? allora risultato : %d\n", a, (*array[a])(8, 2));

    }else{
        puts("valore non compreso nell'array");
    }
}

int somma(int a, int b){
    return a + b;
}

int sottrai(int a, int b){
    return a - b;
}

int moltiplica(int a, int b){
    return a * b;
}

int dividi(int a, int b){
    return a / b;
}

