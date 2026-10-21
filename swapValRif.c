//swap per valore e per riferimento
#include <stdio.h>

//prototipo swap per valore
void swap(int a, int b);
void swap2(int *c, int *d);

int main(){
    int x = 3, y = 7;
    swap(x, y);
    printf("x = %d, y = %d\n", x, y);//avranno gli stessi valori di prima
    puts("ma hanno gli stessi valori");
    puts("questo perche' lo swap e' passato per valore");
    //adesso per riferimento
    swap2(&x, &y);//passo gli indirizzi
    printf("x = %d, y = %d\n", x, y);//qui i valori sono stati scambiati invece
    puts("Ecco! Valori scambiati!Swap per riferimento!");
    puts("Modificate le variabili originali");


}

void swap(int a, int b){
    int temp = a;//var temporanea
    a = b;
    b = temp;
    //qui a e b vengono scambiati, ma sono solo COPIE
}

void swap2(int *c, int *d){
    int tmp = *c;//temp = valore puntato da c (cioè x)
    *c = *d; // nella cella di x scrivo il valore di y
    *d = tmp;//nella cella di y scrivo il vecchio valore di x

}