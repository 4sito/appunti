## Programmazione
---

**Algoritmo**: insieme _ordinato_ e _finito_ di istruzioni elementari, chiare e non ambigue, per risolvere un problema

Composizione dell'algoritmo:
1. Gli elementi:
	- Problema da risolvere;
	- La sequenza delle istruzioni;
	- L'esecutore delle istruzioni;

2. Gli 'attori':
	- chi crea le istruzioni
	- chi le esegue


La risoluzione di un problema spesso implica la soluzione di una serie di _sottoproblemi_ e c'è una stretta correlazione fra *problemi* e *sottoproblemi* 

Miglioramenti applicabili:

1. efficienza, in termini di velocità e linee di codice
2. organizzazione del codice, scomposizione del problema in vari sottoproblemi
3. stile, comprensibile ad altre persone oltre all'autore


### Linguaggio C

I calcolatori non conoscono i linguaggi di programmazione, ma conoscono il 

Linguaggio _macchina_: 
- un linguaggio di basso *livello*
- Il codice macchina di un programma varia in base al tipo di *architettura*.
- difficile 'programmare' in codice macchina (sequenza di bit).

Linguaggio _alto livello_:
- Per poter implementare vari programmi in architetture diverse
- Assieme al linguaggio viene fornito un compilatore, che genera un determinato
  codice macchina in base all'architettura della macchina ospite.
- *Traduttore*

Ci sono 2 tipi di traduzione:

1. Interprete: traduce ed esegue immediatamente un'istruzione di alto livello
	- Esecuzione più lenta,
	- ha bisogno del traduttore,
2. Compilatore, traduce tutte le istruzioni assieme, vengono poi eseguite 
		in linguaggio macchina:
	- esecuzione più veloce,
	- non serve il traduttore ma devo compilare il programma ogni volta
	che cambio il programma
	- il codice deve essere compilato per ogni architettura diversa

Il _C_ è un linguaggio *compilato* e ha un *ristretto* insieme di comandi, si 
affida a librerie di funzioni e quindi il _compilatore_ è facile da scrivere 
e da portare in varie architetture.

Esecuzione di _codice_ in *C*:
1. Preprocessore
	- vengono rimossi i commenti
	- viene copiato il contenuto dei file dopo i comandi:
			`include <x>`
	- espansione delle macro
	- compilazione condizionale, in base all'architettura
2. Compilatore,
	- Traduce il programma ad alto livello a quello macchina
	3. Linker, 
	- Generalmente un programma è composto da molti file e 
		utilizza funzioni scritti in altri (es. `printf`).
	- Le funzioni non vengono duplicate ma caricate in memoria
		e collegate al programma
---

### Hello World

---

Scrivo un programma che scrive 'hello world!'

```
#include <stdio.h>

int main() {

	printf("hello world!\n");
	
	return 0;
}
```
