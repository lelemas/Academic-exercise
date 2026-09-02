//da 1 a 20 ma ogni 5 va a capo
#include <stdio.h>


int main(){

    int n = 1; //cont da stampare

    while(n <= 20){
        printf("%d ", n);

        //controllo per 5
        if(n % 5 == 0){
            puts("");
            //dovrebbe andare a capo ogni 5 
        }
        n++; //incremento
    }
}