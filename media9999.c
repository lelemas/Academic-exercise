//media di interi con 9999 come valore sentinella per il while
#include <stdio.h>


int main(){
    unsigned short int n = 1;//contatore per fare la divisione
    unsigned int x = 0;//per input da tastiera
    int media = 0;//farà da somma e poi verrà diviso per n
    puts("Intero o 9999 per fermare");
    scanf("%u", &x);
    

    while(x != 9999){

        
        media += x;
        
        //finchè 9999 non esce, somma e incrementa il cont
        puts("Intero o 9999 per fermare");
        scanf("%u", &x);
        n++;
    }
    //dopo 9999
    printf("La media e': %d\n", media/(n-1));
    //n - 1 perchè conta anche il valore sentinella
}