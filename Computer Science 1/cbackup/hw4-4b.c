#include <stdio.h>


void recsize(int size) {

int j;
	if(size ==  0)
		return;

	for(j = size; j >= size - 1; j--)
		printf("*");
	printf("\n");

	 recsize(size - 1);
}


int main() {

int size;

	printf("Enter size: ");
	scanf("%d",&size);

	recsize(size);

return 0;
}
