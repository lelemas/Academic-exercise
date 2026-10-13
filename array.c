//così per provare array
#include <stdio.h>
#define SIZE 3 //dimensione array

//prototipo funzione
void stampaArray(int a[SIZE]);

int main(){
    puts("Ciao, provo funzioni ed array");
    int b[SIZE] = {1, 2, 3};
    stampaArray(b);
}

void stampaArray(int a[SIZE]){
    for(size_t i = 0; i < SIZE; i++){
        printf("%d indice, %d elemento\n", i, a[i]);
    }
}
