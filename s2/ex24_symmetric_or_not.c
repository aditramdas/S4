/*Symmetric matrix test
Name : Adith Ramdas
Class : S2CS2
Date : 07/06/2022*/
#include <stdio.h>

int main(void)
{
	int m , i ,A[100][100],j;
	printf("Enter m: ");
	scanf("%d" , &m);
	printf("Enter the matrix numbers: \n");
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < m ; j++ )
		{
			scanf("%d" , &A[i][j]);
			
		}
	}
	for( i = 0 ; i < m ; i++ )
	{
		for(j = 0 ; j < m ; j++)
		{
			if ( A[i][j] != A[j][i])
			{
				printf("The matrix is not Symmetric\n");
				goto here;
			}
		}
	}
	here: if(i==m && j==m)
	{
		printf("The matrix is Symmetric\n");
	}
	if(i < m || j < m)
	{
		for( i = 0 ; i < m ; i++ )
		{
			for(j = 0 ; j < m ; j++)
			{
				printf("%d\t" , A[j][i]);
			}
			printf("\n");
		}
		printf("\n");
	}
}