#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int A[100],n,small ;
	n = argc - 1;
	for(int i = 0 ; i < n  ; i++)
	{
		A[i] = atoi(argv[i+1]);
	}
	small = A[0];
	for(int i = 1 ; i < n ; i++)
	{
		if (A[i] < small)
		{
			small = A[i];
		}
	}
	printf("Smallest : %d\n" , small);

}
