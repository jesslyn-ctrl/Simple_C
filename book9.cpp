#include <stdio.h>

main()
{
	struct nametype {
		char F[10];
		char M;
		char L[20];
	};
	
	struct addrtype {
		char street[30];
		char city[25];
		char state[15];
		char zip[10];
	};
	
	struct Nmtype {
		struct nametype name;
		struct addrtype addr;
	};
	
	struct Nmtype Nm1, Nm2;
	
	gets(Nm1.name.F);
	gets(&Nm1.name.M);
	gets(Nm1.name.L);
	gets(Nm1.addr.street);
	gets(Nm1.addr.city);
	gets(Nm1.addr.state);
	gets(Nm1.addr.zip);
	printf("%s", Nm1.name.F);
	printf("%c", Nm1.name.M);
	printf("%s", Nm1.name.L);
	printf("\n");
	printf("%s", Nm1.addr.street);
	printf("%s", Nm1.addr.city);
	printf("%s", Nm1.addr.state);
	printf("%s", Nm1.addr.zip);
}
