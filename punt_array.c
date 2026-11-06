//esercizi per rafforzare i  concetti di puntatori e array
#include <stdio.h>
#define SIZE 4


int main(){
    //definisco e inizializzo array di dim SIZE
    int array[SIZE] = {0, 1, 2, 3};
    //creo puntatore indirizzato ad array
    int *aPtr = array;
    //puntatore indirizzato automaticamente ad array[0]
    //con gli array non c'è bisogno del '&' perchè il 
    //nome indica già il primo elemento

    //scorro array e stampo indirizzi ed elementi solo del primo indice
    for(size_t i = 0; i < 1; i++){
        //con array[i], indicizzazione array
        printf("array[i] = %d, con indirizzo : %p\n", array[i], &array[i]);
        //puntatore + offset
        printf("puntatore offset, *(aPtr + i) = %d, con indirizzo : %p\n", *(aPtr + i), aPtr + i);
        //puntatore indicizzato
        printf("puntatore indicizzato, aPtr[i] = %d, con indirizzo : %p\n", aPtr[i], &aPtr[i]);
        //array come puntatore più offset
        printf("array come punt. + offset, *(array + i) = %d, con indirizzo : %p\n\n", *(array + i), array + i);

        puts("dovrebbero dare tutti lo stesso risultato");
    }
}