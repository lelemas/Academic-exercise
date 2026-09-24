// Soluzione
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// le costanti di enumerazione rappresentano lo stato del gioco
enum Status {CONTINUE, WON, LOST};
int rollDice(void); // prototipo di funzione
enum Status craps(void); // prototipo di funzione
void chatter(void); // prototipo di funzione

int main(){
 srand(time(NULL)); // seme per il generatore di numeri casuali
 // stampa il saldo corrente e richiedi la puntata
 int bankBalance = 1000; // saldo del banco corrente
 printf("You have $%d in the bank.\n", bankBalance);
 printf("Place your wager: ");
 int wager; // puntata per il giro corrente
 scanf("%d", &wager);
 // ripeti finche' la puntata non e' valida
 while(wager <= 0 || wager > 1000) {
 printf("Please bet a valid amount.\n");
 scanf("%d", &wager);
 }
 enum Status result = craps(); // gioca il giro di craps
 // se il giocatore ha perso il giro corrente
 if (LOST == result) {
 // diminuisci il saldo in base alla puntata e stampa quello nuovo
 bankBalance -= wager;
 printf("Your new bank balance is $%d\n", bankBalance);
 // se il saldo e' 0
 if (0 == bankBalance) {
 printf("Sorry. You are Busted! Thank You For Playing.\n");
 }
 }
 else { // il giocatore ha vinto la partita
 // aumenta il saldo in base alla puntata e stampa quello nuovo
 bankBalance += wager;
 printf("Your new bank balance is $%d\n", bankBalance);
 }
}

// lancio dei dadi, calcola la somma e stampa i risultati
int rollDice(void)
{
 int die1 = 1 + rand() % 6; // genera il valore casuale die1
 int die2 = 1 + rand() % 6; // genera il valore casuale die2
 int workSum = die1 + die2; // somma die1 e die2
 // stampa i risultati di questo lancio
 printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
 return workSum; // restituzione della somma dei dadi
}
// craps gioca un giro di craps, restituisce il risultato del giro
enum Status craps(void)
{
 enum Status gameStatus; // puo' contenere CONTINUE, WON o LOST
 int myPoint; // valore del punto
 int sum = rollDice(); // primo lancio di dadi
 // determina stato del gioco e punto in base alla somma dei dadi
 switch (sum) {
 // vince al primo lancio
 case 7:
 case 11:
 gameStatus = WON;
 chatter();
 break; // uscita dallo switch
 // perde al primo lancio
 case 2:
 case 3:
 case 12:
 gameStatus = LOST;
 chatter();
 break; // uscita dallo switch
 // ricorda il punto
 default:
 gameStatus = CONTINUE;
 myPoint = sum;
 printf("Point is %d\n", myPoint);
 chatter();
 break; // uscita dallo switch
 }
 // finche' il gioco non e' completo
 while(CONTINUE == gameStatus){
    chatter();
    sum = rollDice(); // nuovo lancio di dadi

 // determina lo stato del gioco
    if(sum == myPoint) {
    gameStatus = WON; // vittoria facendo punto
    }
    else {
        if (7 == sum) {
        gameStatus = LOST; // sconfitta tirando 7
        }
    }
 }
 // stampa il messaggio di vittoria o sconfitta e restituisce lo stato
 if(WON == gameStatus) {
 printf("Player wins\n");
 return WON;
 }
 else {
 printf("Player loses\n");
 return LOST;
 }
}
// chatter stampa i messaggi a caso
void chatter(void){
 int select = 1 + rand() % 6;
 // scelta casuale del messaggio
 switch (select){
    case 1:
        printf("Oh, you're going for broke, huh?\n");
        break; // uscita dallo switch
    case 2:
        printf("Aw cmon, take a chance!\n");
        break; // uscita dallo switch
    case 3:
        printf("Hey, I think this guy is going to break the bank!!\n");
        break; // uscita dallo switch
    case 4:
        printf("You're up big. Now's the time to cash!\n");
        break; // uscita dallo switch
    case 5:
        printf("Way too lucky! Those dice have to be loaded!\n");
        break; // uscita dallo switch
    case 6:
        printf("Bet it all! Bet it all!\n");
        break; // uscita dallo switch
    default:
        break;
    // uscita dallo switch
 }
}