//switch che calcola diverse aree
#include <stdio.h>


int main(){
    puts("1 per area cerchio");
    puts("2 per area quadrato");
    puts("3 per area sfera");

    unsigned short int x = 0;
    scanf("%u", &x);

    switch(x){
        case(1): 
            puts("raggio?");
            float raggio = 0.00;
            scanf("%f", &raggio);
            printf("%.2f e' l'area del cerchio\n", raggio * raggio * 3.14);
            break;
            //tutta roba per area cerchio

        case(2):
            puts("lato?");
            float lato = 0;
            scanf("%f", &lato);
            printf("%.2f e' area del quadrato\n", lato * lato);
            break;
            //tutta roba per quadrato

        case(3):
            puts("raggio?");
            float raggioo = 0;//per sfera
            scanf("%f", &raggioo);
            printf("%.2f e' l'area della sfera\n", raggioo * raggioo * (4 *3.14));
            break;
            //tutta roba per area cerchio
        
        default:
            puts("Ma che cazzo di numero hai inserito?");

    }
}