#uso dei commmenti
#uso le funzioni presenti nelle lezioni 4 e 5 così mi esercito
#usi input per salvare in una variabile un valore scritto da utente
nome = input('il tuo nome')#così salvo il val utente in nome
print('il nome inserito usando' \
'la funzione input è : ', nome)
#l'uso di \ mi permette di spezzare la stringa dentro print
#in modo da poter stare tranquillo anche se la stringa fosse
#troppo lunga

numero = int(input('inserisci un numero'))
#così facendo nonn faccio altro che convertire la stringa presa con input
#in un intero, adesso la traformo in un float e la stampo
print(float(numero))
print('casting in float avvenuto con successo')

#fin qui tutto perfetto, ottimo!

#concateno
print('concateno' + 'due stringhe')
#sopra ho semplicemente attaccato due stringhe, se voglio lo spazio
#o lo aggiungo tra le virgolette o aggiungo + ' ' + e via

print('concateno' + ' ' +'due stringhe')
print('concateno' + ' due stringhe')

#assegnazione di espressioni
a = 2
b = 3.0
c = 4
print('conversione di tipi :', a + b + c)
#se la somma è un float è avvenuta con successo la conversione dei tipi

print('proviamo la divisione intera // per vedere' \
      'come funziona c // a', c // a)

print("proviamo l'elevamento a potenza", c**a)
#magic number
print('usiamo sto magic number ', 10)
#numero 10 è un numero messo lì senza essere assegnato ad una var
