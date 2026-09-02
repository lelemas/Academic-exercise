//prog che calcola il fattoriale
#include <stdio.h>


int main(){
    int n = 0;
    puts("Inserisci intero");
    scanf("%d", &n);

    int x = 1;//val neutro moltiplicazione per salvare i risultati

    for(unsigned short int i = 1; i <= n; i++){
        x *= i;
    }

    printf("%d e' il fattoriale di %d\n", x, n);
}