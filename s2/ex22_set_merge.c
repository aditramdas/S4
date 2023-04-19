/*Set Merge
Name : Adith Ramdas
Class : S2CS2
Date : 31/05/2022*/

#include <stdio.h>

int main(void)
{
	int n , m , A[100] , B[100], j , i , C[50], t = 0;
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
	i = 0; j = 0;
	while(i < n && j < m)
	{
		if(A[i] < B[j])
		{
			C[t] = A[i];
			t++;
			i++; 
		}
		if(A[i] > B[j])
		{
			C[t] = B[j];
			t++;
			j++;
		}
		if(A[i] == B[j])
		{
			C[t] = B[j];
			t++;
			j++;
		}	
			
	}
	if(i==n)
	{
		for(int k = j ; k < m ; k++)
		{
			C[t] = B[k];
			t++;
		}
	}
	if(j==m)
	{
		for(int e = i ; e < n ; e++)
		{
			C[t] = A[e];
			t++;
		}
	}
	for(int e = 0 ; e < t ; e++)
		printf("%d ", C[e] );
	printf("\n");
}