//array passato a funzione, perchè nel main vale 16 byte e nella funz  8?
#include <stdio.h>
#define SIZE 4

//prototipo di f
int funz(int *a);
//array passato ad f dovrebbe bastare(?)

int main(){
    int array[SIZE] = {0, 1, 2, 3};
    //array definito vedo quanto vale
    printf("dimensione array con sizeof: %d byte\n", sizeof(array));
    printf("dimensione array con sizeof in funzione : %d byte\n", funz(array));
}

int funz(int *a){
    return sizeof(a);
    //ritorna dimensione del puntatore non dell'array
}

//quindi concetto di fondo l'array vale 16 perchè 4 int per 4 sono 16 byte
//mentre il puntatore 8 byte perchè essendo il pc un 64 bit 64 bit / 8 bit(che equivale ad un byte) è uguale
// a 8 byte quindi visto che il puntatore contiene semplicemente indirizzi di memoria, allora vale 8byte che 
//rappresenta la dimensione di una cella di memoria in 64 bit