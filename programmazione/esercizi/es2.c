#include <stdio.h>


int main(){

int n=13;
int i, sum = 0;

for(i=2; i<=n; i = i +2){

sum = sum + i;

}

printf("La somma dei numeri pari prima di %d e' uguale a %d", n, sum);

return 0;
}
