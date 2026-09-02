#include <stdio.h>


int main(){
    int sum = 0;
    unsigned short int n = 1;//contatore

    do{
        if(n % 2 == 1){
            //se n dispari
            sum += n;
            n++; //incremento
        }else {
            n++;//incremento
        }
    }while(n <= 99);

    printf("%d\n", sum);
}