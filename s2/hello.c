#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int (*a)[10];
	printf("%ld\n", sizeof(*a) );
}