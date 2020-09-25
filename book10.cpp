#include <stdio.h>

main()
{
	int A, *P, **PP;
	A = 25;
	P = &A;
	PP = &P;
	
	printf("%i %i %i", A, *P, **PP);
	printf("\n");
	printf("%X %X %X", &A, &P, &PP);
	printf("\n");
	printf("%X %X %X", A, P, PP);
}
