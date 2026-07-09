//potenza con iterazione
#include <stdio.h>


int main(){
    //def var
    int x, y;
    int potenza = 1;
    //valore dove salvo x elevato a y
    //uguale a 1 perchè 0 è l'elemento neutro della *

    //prompt
    puts("Scrivi x e y");
    scanf("%d %d", &x, &y);

    unsigned int i = 1;

    while(i <= y){
        potenza *= x;
        i++;
    //fine while
    }
      

    printf("x : %d elevato a y : %d è %d", x, y, potenza);
}
