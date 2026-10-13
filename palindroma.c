//ogni linguaggio parla di questo esempio che sinceramente è il più odioso in assoluto
/*
Palindromi
Un palindromo è una stringa che si scrive e si legge
allo stesso modo in avanti e all’indietro
Alcuni esempi di palindromi sono: “radar”, “able was i
ere i saw elba” e, se ignorate gli spazi, “a man a plan
a canal panama”
Scrivete una funzione ricorsiva testPalindrome
che restituisca 1 se la stringa memorizzata in un array
è un palindromo e altrimenti 0
La funzione deve ignorare gli spazi e la punteggiatura
nella stringa 
*/

#include <stdio.h>
#define SIZE 80
// prototipo di funzione
int testPalindrome(char array[], int left, int right);

int main(void){
    char string[SIZE]; // stringa originale
    char copy[SIZE]; // copia della stringa senza spazi
    
    puts("Enter a sentence:");
    
    char c; // tiene temporaneamente l'input
    unsigned int count = 0; // lunghezza della stringa
    // ricevi la frase da testare dall'utente
    while ((c = getchar() ) != '\n' && count < SIZE) {
        string[count++] = c;
    }
    string[count] = '\0'; // termina la stringa
    unsigned int copyCount = 0;
    // crea una copia della stringa senza spazi
    for (unsigned int i = 0; string[i] != '\0'; ++i) {
        if (string[i] != ' ' && string[i] != "," && string[i] != "." && string[i] != "!") {
            copy[copyCount++] = string[i];
        }
    }
    // stampa se la sentenza e' o non e' un palindromo
    if (testPalindrome(copy, 0, copyCount - 1)) {
        printf("\"%s\" is a palindrome\n", string);
    }else{
        printf("\"%s\" is not a palindrome\n", string);
    }
}

// funzione per vedere se la frase e' un palindromo
int testPalindrome(char array[], int left, int right){
    // testa l'array per vedere se e' un palindromo
    if (left == right || left > right) {
        return 1;
    }else if (array[left] != array[right]) {
        return 0;
    }else {
        return testPalindrome(array, left + 1, right - 1);
    }
}
