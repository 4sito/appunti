#include <stdio.h>	

int main() {

int x = 5;

while(x != 0){

	printf("%d Ciao Mondo\n", x);

	x--;
}

int i = 0, somma = 0;

while(i <= 24){

	somma = somma + i; 
	i++;

}
printf("%d\n", somma);

return 0;
}
