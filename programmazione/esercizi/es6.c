#include <stdio.h>

int main (void) {

  const int ALTEZZA = 6;
  int totale_caratteri_riga = ALTEZZA*2-1; // somma degli spazi e
  int num_riga; // contatore per il numero di righe stampate
  int j;

  for (num_riga=1; num_riga<=ALTEZZA; num_riga = num_riga + 1) {
    // stampa la i-esima riga della piramide rovesciata, con i=num_riga

    // stampa tutti gli spazi iniziali della riga corrente
    for (j = 1; j < num_riga; j = j+1) { //stampa num_riga-1 spazi
      printf("x");
    }

    //stampa tutti i caratteri # della riga corrente
    for (j = 1; j <= totale_caratteri_riga-(num_riga-1)*2; j += 1) {
      //il numero di caratteri
      printf("#");
    }

    printf("\n");
  }

}
