#include <stdio.h>

int main(void)
{
    int c;

	//getchar is like scanf
	//putchar is like printf

    while((c = getchar()) != EOF )
        putchar(c);

    fflush(stdout);
    return 0;
}


