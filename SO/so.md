## SO introduzione

---

### Cenni Storici

1. Anni '40:
	Enigma, Colossus, 1944; ENIAC, 1947; EDVAC, 1949. I computer sono
	utilizzati principalmente a scopo militare

2. Anni '50:
	Nascono i primi calcolatori a programma memorizzato,
	che deve essere gestito da un operatore umano, nascono i primi 
	videogiochi

3. Anni '60:
	Nascono i primi compilatori e i primi linguaggi di programmazione,
	che permettono, persiste la gestione a _lotti_, cominciano 
	ad essere commercializzati i calcolatori. Non è più necessaria 
	la gestione da parte di un umano bensì ma l'esecuzione di un lavoro può 
	essere gestita da un SO residente.
	Grazie alla *multiprogrammazione* è possibile eseguire diversi lavori
	simultaneamente, con i _mono_processori, il parallelismo è simulato.

4. Anni '70:
	Molte big tech companies nascono proprio in questo periodo:
	Apple, Microsoft, IBM, etc.

5. Anni '80:
	Il prezzo dei computer e dei dispositivi elettronici diventa 
	'affordable' per il grande pubblico.
	Nascono i floppy, i primi protocolli internet vengono creati e nasce
	l'idea del P&P (plug and play) con l'Amiga 500.

6. Anni '90:
	Comincia la distribuzione delle applicazioni, nasce il world wide web 
	e *milioni* di pc sono venduti ogni anno.

7. Anni 2000:
	I computer portatili sono più venduti rispetto ai computer fissi,
	la maggioranza dei computer utilizza Windows come sistema operativo.

8. Anni 2010:
	Gli smartphone e tablet sorpassano i laptop/desktop nelle vendite.
	Si ha l'avvento del cloud.                                    

---

### Tipi di Processi

---

```
Un programma è un processo quando va in esecuzione. 
```

Gestione a lotti = batch. è necessario un umano per poter eseguire le operazioni di input/output

I due modi per gestire l'esecuzione dei processi:

- batch 
- spooling, simultaneous peripheral operation on-line, nei computer
	    mono-processore il multitasking è simulato.

### Definizione di Sistema Operativo

``` 
	Un insieme di utilità per offrire all'utente:
	- un'astrazione più semplice e potente della macchina assembler
	- gestire in maniera otttimale le risorse fisiche e  logice dell'elaboratore
```

**Astrazione semplice e potente**:

- Macchina Virtuale:
   - ambiente in cui eseguire applicazioni
   - era pensato per macchine multi-utente (esempio, stesso computer per 
		più persone, ora per stessa persona ma diversi processi)
- Più semplice da usare e non serve conoscere la 'microprogrammazione'
- Più potente, utilizzo la memoria secondaria per realizzare una memoria
		virtuale principale più capiente.

Gestione _ottimale_ delle risorse:

- l'ottimalità è la __minimizzazione__ dei tempi di attesa e le
	__massimizzazione__ dei lavori svolti per unità di tempo

minimizzare: non si può ridurre più di così,
massimizzare: non si possono ottenere più prestazioni.
ottimizzare: migliorare le prestazioni


---

### Processo

---

```
Un processo è  un programma in esecuzione
```

Corrisponde a: 

- l'insieme ordinato di **stati** assunti dal programma durante l'esecuzione
- l'insieme ordinato delle **azioni** effettuate dal programma

Durante la realizzazione di un processo lo spazio di indirizzamento **logico** è la memoria della macchina 
virtuale che il processo può scrivere e leggere (la memoria virtuale è organizzata in pagine e/o segmenti):

1. programma eseguibile
2. dati del programma
3. aree di lavoro


Alcune parti del sistema operativo possono essere processi, rispetto a quelli 
utente _generalmente_ hanno maggiore **priorità** e sono più **corti**:

I processi utente e di sistema operativo sono eseguiti **concorrentemente**

IL S/O può sincronizzare e far comunicare più processi

I processi possono essere:
1. Creati
2. Sospesi
3. Terminati


**coda di attesa**, non ho tutte le risorse necessarie per eseguire il processo \
**coda di pronto**, ho tutte le risorse necessarie per eseguire il processo, ma non il processore

#### Il gestore dei processi
Costituisce il cuore o nucleo del S/O **kernel**:
- gestisce e assicura l'avanzamento dei processi


```
La risorsa è un qualsiasi elemento fisico o logico necessario alla creazione,
esecuzione e avanzamento dei processi
```

Le risorse possono essere:

- durevoli
- consumabili
- ad accesso divisibile e indivisbile
- ad accesso individuale o molteplice

Tipi di risorse:

1. CPU
  
   - è una risorsa indispensabile per l'avanzamento di **tutti** i processi
   - corrisponde alla CPU
   - logicamente, si può vedere come una macchina virtuale

2. Memoria
  
   - Scrittura: ad accesso _individuale_
	 - Lettura: ad accesso _multiplo_
	 - Viene _virtualizzata_ dalla gestione software
	 - Se virtualizzata, diventa **riutilizzabile** e **prerilasciata**
	
3. I/O
	
	 - generalmente riutilizzabili, non _prerilascaibili_ ad accesso _individuale_
	 - La gestione software ne facilita l'impiego e **nasconde** le caratteristiche hardware
