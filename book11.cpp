#include <stdio.h>
#include <stdlib.h>

main()
{
	int *P;
	P = (int*) malloc(sizeof(int));
	*P = 25;
	
	printf("%i", *P);
}
