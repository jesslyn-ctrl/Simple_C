#include <stdio.h>
#include <string.h>

main()
{
	struct stint {
		long int f3, f4;
	};
	
	struct stfloat {
		double f5, f6;
	};
	
	struct samplex {
		long int f1;
		double f2;
		long int utype;
		union {
			struct stint x;
			struct stfloat y;
		} funion;
	};
	
	struct samplex sample;
	
	printf("%p\n", &sample.f1);
	printf("%p\n", &sample.funion.x.f4);
	printf("%p\n", &sample.funion.y.f6);
}
