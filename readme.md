## Esercizi

### Esercizio 1: Allocazione Dinamica di un Singolo Intero
Scrivi un programma che alloca dinamicamente un singolo numero intero, assegna un valore predefinito a questa variabile, ne stampa il valore e l'indirizzo di memoria e successivamente libera la memoria allocata.

**Obiettivi:**
- Comprendere l'allocazione dinamica con `malloc`.
- Gestire la memoria utilizzando `free`.
- Stampare indirizzi di memoria.

---

### Esercizio 2: Allocazione Dinamica di un Array
Realizza un programma che alloca dinamicamente un array di numeri interi. Il programma deve chiedere all'utente quanti elementi desidera, permettere l'inserimento di questi elementi e poi stamparli. Infine, libera la memoria occupata dall'array.

**Obiettivi:**
- Utilizzare `calloc` per l'allocazione di un array.
- Gestire l'input dell'utente e l'output di un array.
- Liberare correttamente la memoria con `free`.

---

### Esercizio 3: Funzioni per Allocazione e Stampa di un Array
Implementa una funzione che alloca dinamicamente un array e una funzione che stampa il contenuto dell'array. Il programma principale deve usare queste due funzioni per allocare un array di numeri interi, popolarlo con input utente e stamparne il contenuto.

**Obiettivi:**
- Creare funzioni per l'allocazione e la stampa di array.
- Separare la logica di allocazione dalla stampa.

---

### Esercizio 4: Ridimensionamento Dinamico di un Array
Crea un programma che consente di ridimensionare un array già allocato dinamicamente. Dopo aver inserito i valori, il programma deve chiedere all'utente se desidera modificare la dimensione dell'array e, in tal caso, utilizzare `realloc` per ridimensionarlo. L'array deve essere aggiornato con nuovi valori se viene espanso.

**Obiettivi:**
- Utilizzare `realloc` per ridimensionare un array esistente.
- Gestire l'input utente per il ridimensionamento.
- Mantenere la gestione corretta della memoria.

---

### Esercizio 5: Allocazione e Stampa di una Matrice 2D
Scrivi un programma che alloca dinamicamente una matrice 2D di numeri interi. La matrice deve essere popolata con numeri casuali e stampata. Alla fine, libera la memoria allocata.

**Obiettivi:**
- Gestire l'allocazione dinamica di una matrice 2D.
- Lavorare con array di array (puntatori a puntatori).
- Utilizzare funzioni per la stampa e l'allocazione della matrice.

---

### Esercizio 6: Allocazione e Stampa di una Matrice 3D
Realizza un programma che alloca dinamicamente una matrice 3D di numeri interi. Popola la matrice con numeri casuali e stampala. Alla fine, libera correttamente la memoria della matrice 3D.

**Obiettivi:**
- Utilizzare puntatori tripli per rappresentare matrici 3D.
- Gestire l'allocazione e la deallocazione di strutture dati tridimensionali.
- Stampare i valori su più "layer" (piani) della matrice.

---

### Esercizio 7: Implementazione di una Coda Circolare
Implementa una coda circolare utilizzando un array dinamico. Fornisci le funzioni di base come `enqueue` (inserimento), `dequeue` (estrazione), e `printQueue` (stampa della coda). La coda deve gestire i casi di overflow (quando la coda è piena) e underflow (quando è vuota).

**Obiettivi:**
- Implementare una struttura dati di coda circolare.
- Gestire l'inserimento e la rimozione degli elementi in modo efficiente.
- Comprendere la gestione delle code tramite array circolari.

---