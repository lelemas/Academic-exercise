//prog che calcola il fattoriale
#include <stdio.h>


int main(){
    int n = 0;
    puts("Inserisci intero");
    scanf("%d", &n);

    int x = 1;//val neutro moltiplicazione per salvare i risultati
    unsigned short int i = 1;
    for(; i <= n; i++){
        if(i == 15){
            break;
        }

        x *= i;
        
    }

    printf("%d e' il fattoriale di %d\n", x, i);
}