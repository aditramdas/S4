/*Set Operation
Name : Adith Ramdas
Class : S2CS2
Date : 31/05/2022*/

#include <stdio.h>

int main(void)
{
	int n , m , A[100] , B[100], j , i;
	printf("Enter number of terms in set 1: " );
	scanf("%d" , &n);
	printf("Enter number of terms in set 2: " );
	scanf("%d" , &m);
	printf("Enter the numbers in set 1: \n" );
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d" , &A[i]);
	}
	printf("Enter the numbers in set 2: \n" );
	for(int i = 0 ; i < m ; i++)
	{
		scanf("%d" , &B[i]);
	}
	printf("A U B : ");
	for(int i = 0 ; i< n ; i++)
	{
		printf("%d " , A[i]);
	}
	for(int i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			if(A[j] == B[i])
			{
				break;
			}
		}
		if(j == n)
		{
			printf("%d ",B[i]);
		}
	}
	printf("\n");
	printf("A intersection B : ");
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(A[j] == B[i])
			{
				printf("%d ",B[i]);
				break;
			}
		}
	}
	printf("\n");
	printf("A - B :");
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++)
		{
			if(B[j] == A[i])
			{
				break;
			}
		}
		if(j == m)
		{
			printf("%d ",A[i]);
		}
	}
	printf("\n");
}