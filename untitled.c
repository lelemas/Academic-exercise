//trasformo un array attraverso una callback, calllback è una f passata come parametro
#include <stdio.h>
#define SIZE 4

//prototipi di f
int doppio(int a);
int incremento(int a);
int quadrato(int a);
void applica(int array[], size_t n, int (*funz)(int b));
void stampa(int array[], size_t n);

int main(){
    int arr[SIZE] = {1, 2, 3, 4};
    
    printf("%16s","L' originale : ");
    stampa(arr, SIZE);

    applica(arr, SIZE, doppio);
    printf("%16s","raddoppiato : ");
    stampa(arr, SIZE);

    applica(arr, SIZE, incremento);
    printf("%16s","incrementato : ");
    stampa(arr, SIZE);
    
    applica(arr, SIZE, quadrato);
    printf("%16s","quadrato : ");
    stampa(arr, SIZE);

}

//def funzioni
int doppio(int a){ return a*2; }
int incremento(int a){ return a + 1; }
int quadrato(int a){ return a * a ;}
void applica(int array[], size_t n, int(*funz)(int b)){
    for(size_t i = 0; i < n; i++){
        //accedo al valore dell'elemento dell'array
        //e con assegnamento modifico il valore in base alla f chiamata
        *(array + i) = (*funz)(*(array + i));
    }
    
}
void stampa(int array[], size_t n){
    for(size_t i = 0; i < n; i++){
        //stampo il valore dell'elemento dell'array
        printf("%d\t", *(array + i));
    }
    //fine ciclo vado a capo
    puts("");
}