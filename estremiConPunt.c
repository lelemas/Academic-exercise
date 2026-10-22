//trovo il min e max di un array grazie all'uso di puntatori
#include <stdio.h>
#include <limits.h>
#define SIZE 5//dim array


void cerco(int array[], int *min, int *max);//proto


int main(){
    //array def e iniz
    int a[SIZE] = {0, 2, 16, 39, 67};
    int mi, ma; //var a cui assegnero i puntatori
    cerco(a, &mi, &ma);//chiamata di f con gli indirizzi delle var
    printf("max : %d e min : %d\n", ma, mi);
}


void cerco(int array[], int *min, int *max){
    *max = INT_MIN;
    *min = INT_MAX;

    for(size_t i = 0; i < SIZE; i++){
        if(array[i] > *max){
            *max = array[i];
            //cambio il valore nella cella di mem con il nuovo max
        } 
        if(array[i] < *min){
            *min = array[i];
            //cambio il valore nella cella di mem con il nuovo min
        }
    }

    return;
}