#include <stdio.h>

int len(char* N){

    int str_len = 0;

    while( N[str_len] != '\0'){
          str_len++;
    }

    //printf("Lunghezza stringa: %d\n", str_len);

    return str_len ;

}

int check_match(char parola[16],
        char temp[16], int parola_len){

    int i, acc=0;

    for (i = 0; i < parola_len; ++i) {

        if(parola[i] != temp[i])
          return 0;    
        acc++;
    }

    if(acc == parola_len)
        return 1;

    return 0;

}

int string_manipulation(char parola[16], char table[16],
        int parola_len, int string_len, int dir){

  char temp[16];
  int i,j;

  for (i = 0; i < string_len; ++i) {
      //printf("%d, %d, %d\n", i, string_len, parola_len);
      if (dir == 0) {
      
        if(i > string_len - parola_len)
          return -1;
      }
      
      /*
       * else if(dir == 1){
      
        if(i > string_len + parola_len)
          return -1; 
      }
      */

      //printf("i:%d str:%d par:%d str-par:%d\n", i, 
      //    string_len, parola_len, string_len-parola_len); 

      for (j = 0; j < parola_len; ++j) {
            //printf("%c", *(table+i+j));
            temp[j] = *(table+i+j);

      }
      //printf("\n");
        //printf("%d: %s == %s\n",i, temp, parola);
        if(check_match(parola, temp, parola_len) == 1){
            //printf("match in column %d\n", i);

            if( dir == 0)
              return i;
            else 
              return string_len - i;
            }
        temp[0] = '\0';

  }

  return -1;

}

void reverse_string(char string[16], int len){
  char r_table[16];
  int i, j = len;

  // printf("%d\n", len);
  for (i = 0; i < len+1; ++i) {
  
    r_table[j] = string[i];
    //printf("%c", string[i]);
    j--;

    }


 for (i = 0; i < len+1; ++i) {
   
   string[i] = r_table[i];
   //printf("%c", string[i]);

 } 

 //printf("\n");

  return;
}

void to_upper(char string[16]){
   
  //printf("stringa inzio: %s\n", string);
  
  int ascii_int, i = 0;
  
  while(string[i] != '\0'){

  ascii_int = (int) string[i];
  
  //printf("%d, %c\n", ascii_int, string[i]);
  
  if ( ( ascii_int >=97 && ascii_int <= 122)) {
  // converto da lower ad uppercase
  string[i] = string[i] - 32;
  
    }
  i++;
  }

  //printf("stringa convertita: %s\n", string);
  return;
}




int trova(char parola[16], char table[13][16], 
        int *x, int *y, int *dir){

	int i;
	int parola_len = len(parola), string_len = len(table[0]);
	//char temp[parola_len];

  //printf("Controllo della tabella da sinistra a destra...\n"); 
	
	for (i = 0; i < 13; ++i) {
		
    if(string_manipulation(parola, table[i],
            parola_len, string_len, *dir) != -1 ){
        //printf("Match in Row %d\n", i);
        *x = i;
        *y = string_manipulation(parola, table[i], 
                parola_len, string_len, *dir);
        return 1; 
        }

    }

  
  *dir = 1; // cambio la direzione da destra a sinistra
  //printf("Controllo della tabella da destra a sinistra...\n"); 


  for (i = 0; i < 13; ++i) {
		
    reverse_string(table[i], string_len);
    if(string_manipulation(parola, table[i],
            parola_len, string_len, *dir) != -1 ){
        //printf("Match in Row %d\n", i);
        *x = i;
        *y = string_manipulation(parola, table[i], 
                parola_len, string_len, *dir);
        return 1; 
        }

    }


    *x = -1;
    *y = -1;
    return 0;

}


int main(void) {

    char tabella[13][16] = { 
        {"EISEOPIDLNOTETM"},
        {"RIPOSOTICUCBAOI"},
        {"ETROPSIVOOINMRL"},
        {"RSINNETIITGSFAA"},
        {"ROCKSPCNTOIOOLM"},
        {"OLAUOSSABLLIRLI"},
        {"CAMPINGZCBDAUYN"},
        {"BCOLLEZIONISMOA"},
        {"ALTIROCONLARCOB"},
        {"LAOIGGANIDRAIGM"},
        {"LIBGCINEMAIERLA"},
        {"OROTALIGUPORITS"},
        {"OTENOIZAMROFNIE"}
        };

    int x, y, dir = 0;
    char parola[16];
    

    scanf("%255s", parola);
    
    char temp_parola[16];

    sprintf(temp_parola, "%s", parola);
    //codice qui
    to_upper(parola);
		
		trova(parola, tabella, &x, &y, &dir);
    
	
    printf("Parola %s ", temp_parola);
    if (x != -1)
    printf("in (%d,%d), direzione %s\n",
				x, y, dir==0?"s->d":"d->s");
    else
        printf("non trovata\n");

	
	return 0;
}
