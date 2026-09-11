//dado numeri pseudocasuali
#include <stdio.h>
#include <stdlib.h>

int main(){
    //tutte le freq delle facce dei dati
    int freq1 = 0;
    int freq2 = 0;
    int freq3 = 0;
    int freq4 = 0;
    int freq5 = 0;
    int freq6 = 0;

    int face;

    for(unsigned int i = 0; i < 60000000; ++i){
        face = 1 + rand() % 6;//faccia dado da 1 a 6
        //genero un numero pseudo casuale che va da 1 a 6
        switch (face){
            case 1 :
                ++freq1;
                break;
            case 2 :
                ++freq2;
                break;
            case 3 :
                ++freq3;
                break;
            case 4 :
                ++freq4;
                break;
            case 5 :
                ++freq5;
                break;
            case 6 :
                ++freq6;
                break;
        }
    }
    //stampo una tabella con i dati
    printf("%s%13s\n", "Faccia", "Frequenza");
    printf("   %d%13d\n", face = 1, freq1);
    printf("   %d%13d\n", face = 2, freq2);
    printf("   %d%13d\n", face = 3, freq3);
    printf("   %d%13d\n", face = 4, freq4);
    printf("   %d%13d\n", face = 5, freq5);
    printf("   %d%13d\n", face = 6, freq6);
}
