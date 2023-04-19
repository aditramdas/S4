/*Prime or not with functions
Name : Adith Ramdas
Class : S2CS2
Date : 18/06/2022*/
#include <stdio.h>
#include <math.h>

int prime_no(int a);
int main(void)
{
	int m,n , i ,A[100][100],j,org,k,l,p[100];
	printf("Enter m: ");
	scanf("%d" , &m);
	printf("\nEnter n: ");
	scanf("%d" , &n);
	printf("Enter the matrix numbers: \n");
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++ )
		{
			scanf("%d" , &A[i][j]);
		}
	}
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++ )
		{
			k = A[i][j];
			if(prime_no(k))
				printf("%d\t", A[i][j]);
		}
	}
	printf("\n");
}

int prime_no(int a)
{
	int e = (int)(sqrt(a));
	for(int i =2 ; i <= sqrt(a) ; i++)
	{
		if(a%i == 0)
			return 0;
	}
	return 1;
}