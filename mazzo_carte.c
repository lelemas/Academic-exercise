// Programma per mescolare e distribuire un mazzo di 52 carte.
//
// IDEA DI BASE:
// Il mazzo è una "tabella" (array 2D) da 4 righe x 13 colonne:
//   - ogni RIGA è un seme   (0 = Hearts, 1 = Diamonds, 2 = Clubs, 3 = Spades)
//   - ogni COLONNA è un valore (0 = Ace, 1 = Deuce, ..., 12 = King)
// Quindi la cella deck[riga][colonna] rappresenta UNA carta precisa
// (es. deck[3][0] = Asso di Picche).
// Dentro la cella scriviamo un numero da 1 a 52: è la POSIZIONE in cui
// quella carta esce dal mazzo mescolato (1 = prima carta, 52 = ultima).
 
#include <stdio.h>   // printf
#include <stdlib.h>  // rand, srand
#include <time.h>    // time (per il seme dei numeri casuali)
 
#define SUITS 4   // numero di semi
#define FACES 13  // numero di valori per seme
#define CARDS 52  // carte totali (4 x 13)
 
// prototipi
void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char *wFace[],
          const char *wSuit[]);
 
int main(void)
{
    // inizializza l'array deck: tutte le celle a 0 = "nessuna carta assegnata"
    unsigned int deck[SUITS][FACES] = {0};
 
    // seme per i numeri casuali: usando l'ora attuale, ogni esecuzione
    // produce una mescolata diversa (senza srand uscirebbe sempre la stessa)
    srand((unsigned int)time(NULL));
 
    shuffle(deck); // mescola il mazzo
 
    // inizializza l'array suit: l'indice corrisponde alla riga di deck
    const char *suit[SUITS] =
        {"Hearts", "Diamonds", "Clubs", "Spades"};
 
    // inizializza l'array face: l'indice corrisponde alla colonna di deck
    const char *face[FACES] =
        {"Ace", "Deuce", "Three", "Four",
         "Five", "Six", "Seven", "Eight",
         "Nine", "Ten", "Jack", "Queen", "King"};
 
    deal(deck, face, suit); // distribuisci il mazzo
 
    return 0;
}
 
// mescola le carte nel mazzo
void shuffle(unsigned int wDeck[][FACES])
{
    // per ogni numero d'ordine da 1 a 52, scegli a caso una cella libera
    for (size_t card = 1; card <= CARDS; ++card) {
        size_t row;    // numero della riga (seme)
        size_t column; // numero della colonna (valore)
 
        // scegli una locazione a caso non occupata:
        // se la cella estratta contiene già un numero (!= 0), riprova.
        // NB: verso la fine restano poche celle libere, quindi il ciclo
        // può ripetersi molte volte prima di "beccarne" una. Funziona,
        // ma non è il metodo più efficiente (esiste il Fisher-Yates).
        do {
            row = rand() % SUITS;    // numero casuale tra 0 e 3
            column = rand() % FACES; // numero casuale tra 0 e 12
        } while (wDeck[row][column] != 0);
 
        // inserisci numero d'ordine carta nell'elemento scelto
        wDeck[row][column] = (unsigned int)card;
    }
}
 
// distribuisci le carte nel mazzo
void deal(unsigned int wDeck[][FACES], const char *wFace[],
          const char *wSuit[])
{
    // distribuisci ognuna delle carte, in ordine: prima la 1, poi la 2, ecc.
    for (size_t card = 1; card <= CARDS; ++card) {
        // cerca in tutta la tabella la cella che contiene il numero "card"
        // effettua un ciclo lungo le righe di wDeck
        for (size_t row = 0; row < SUITS; ++row) {
            // effettua un ciclo lungo le colonne di wDeck
            for (size_t column = 0; column < FACES; ++column) {
                // se l'elemento contiene la carta corrente...
                if (wDeck[row][column] == card) {
                    // ...stampa valore e seme usando riga e colonna
                    // come indici negli array dei nomi.
                    // %5s  = stringa allineata a destra su 5 caratteri
                    // %-8s = stringa allineata a sinistra su 8 caratteri
                    // dopo una carta pari va a capo ('\n'), dopo una
                    // dispari mette un tab ('\t') -> stampa su 2 colonne
                    printf("%5s of %-8s%c", wFace[column], wSuit[row],
                           card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}