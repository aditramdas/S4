/*Largest element within N numbers
Name : Adith Ramdas
Class : S2CS2
Date : 01/07/2022*/

#include <stdio.h>
int largest(int n , int A[]);
int main(void)
{
	int i, j, n, m, A[100] , B[100][100];
	printf("Enter rows and colums in  matrix: ");
 	scanf("%d %d" , &m, &n);
	for( i = 0 ; i< m ; i++)
 	{
 		for(j = 0 ; j < n ; j++)
 		{
 			scanf("%d" , &B[i][j]);
 		}
 	}
 	printf("\n");
 	printf("\n");
 	for( i = 0 ; i < m ; i++) {
 		for( j  = 0 ; j < n ; j++)
 			A[j] = B[i][j];
 		printf("%d\n", largest(n , A));
 	}
}
int largest(int n , int A[])
{
	int large = A[0];
	for(int j = 1 ; j < n ; j++)
	{
		if(A[j] > large)
			large = A[j];
	}
	return large;
}