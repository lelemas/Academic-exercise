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

    unsigned a;//var in cui salvo la lettura input dell'utente
    puts("0 per somma, 1 per sottrai, 2 per moltiplica, 3 dividi");
    scanf("%u", &a);

    if(a >= 0 && a <= 3){
        (*array[a])(8, 2);
    }else{
        puts("valore non compreso nell'array");
    }
}

int somma(int a, int b){
    printf("la somma : %d\n", a + b);
    return 0;
}

int sottrai(int a, int b){
    printf("la sottrazione : %d\n", a - b);
    return 0;
}

int moltiplica(int a, int b){
    printf("la moltiplicazione : %d\n", a * b);
    return 0;
}

int dividi(int a, int b){
    printf("la divisione : %d\n", a / b);
    return 0;
}

//si va bene tutto il programma funziona ma come faccio a salvare il valore
//e farlo stampare nel main? perchè in questo modo aggiro la vera funzione dell'esercizio
//e il valore passato non verra salvato da nessuna parte