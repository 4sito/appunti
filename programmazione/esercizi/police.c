// NOTE: it is recommended to use this even if you don't understand the following code.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

// constraints
#define MAXN 10

// police 4 exercise,
//
// L = length of street in meters,
// position Wiliams position is x = 0;
// nest position x = L;
// N = traffic lights at position X_i,
// they are all synchronized at t = 0;
// T = half-period of a semaphore (red to green, vice versa),
//
// william is travelling at the speed of 1 m/s
//
// R = no of semaphores he can skip
//
// N, R, T, L
// X[0], X[1], ... X[N]

// street is long 10 meters, he can skip 1 smph, out of 3, so he has to deal
// with 2;
// se non ci fossero semafori, impigherebbe 10 secondi > velocità = 1 m/s
// smph stays green for 3 seconds, then 3 seconds of red and so on;
// the semaphores are at position 1, 5, 9
// the first semaphore is at position 1 so after 1 second (when he arrives) it's
// still green, he can skip smph 2 
//


// input data
int N, R, T, L, i;
int X[MAXN];

bool is_green(int pos, int T);
int smph_wait(int pos, int T);

int smph_wait(int pos, int T){
    
    int wait = 0;
    int tmp_pos = pos + 1;

    if(is_green(pos, T) == 1){
    return wait;
    }

    else{
        wait = tmp_pos ;

            while(wait > T){
            wait = wait - T;
            } 
            wait = T+1 - wait;

        return wait;
        }
}

bool is_green(int pos,int T){
    
    bool green = 1;
    bool red = 0;
    // troviamo quando il semaforo sarà verde o rosso
    // se dividiamo la posizione per il lasso di tempo in cui
    // è verde se il risultato è pari è verde, altrimenti è rosso
    //
    int div = pos/T;

    if(div % 2 == 0){
        return green;
    }
    else
        return red;
}

bool smph(int pos, int *X, int *sem_ctr){

//printf("pos: [%d]  ==  X[%d] = %d\n", pos, *sem_ctr ,X[*sem_ctr]  );
    
    if(pos == X[*sem_ctr]){
        *sem_ctr = *sem_ctr + 1;
        return true;
    }
    else 
        return false;
    

}

int main() {
//  uncomment the following lines if you want to read/write from files
  freopen("input0.txt", "r", stdin);
  //freopen("output0.txt", "w", stdout);
    
    assert(4 == scanf("%d %d %d %d", &N, &R, &T, &L));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &X[i]));

    // insert your code here
    int pos = 0, tempo = 0, tmp_sem = 0;
    int *sem_ctr = &tmp_sem;
        
    for (i = 0; i < L; ++i) {
        
        printf("Pos[%d] --->%d  | |  ", pos, is_green(pos, T));

        printf("Wait = %d | | ", smph_wait(pos, T) );


        if (smph(pos, X, sem_ctr) == 1){
            printf("Semaforo \n");
            
            if(is_green(pos, T) != 0){
                    
            }

            }
    
        else{
            printf("No semaforo\n");
        }

        pos++;
        tempo++;
    } 

    printf("tempo: %d\n", 42); // print the result
    return 0;
}
