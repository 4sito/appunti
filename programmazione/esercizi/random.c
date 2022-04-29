#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i;

	srand(2);

	for (i = 0; i < 10; ++i) {
		printf("%d\n", rand() % 30 + 45);
	}
	return 0;
}
