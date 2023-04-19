/*Bubble Sort
Name : Adith Ramdas
Class : S2CS2
Date : 31/05/2022*/

#include <stdio.h>
int main(void)
{
	int n , A[100],temp;
	printf("Enter number of terms: ");
	scanf("%d" , &n);
	printf("Enter the numbers\n");
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d" , &A[i]);
	}
	for(int i = 0 ; i < n-1 ; i++)
	{
		for(int j = 0 ; j < n-1-i ; j++)
		{
			if (A[j] > A[j+1])
			{
				temp = A[j+1];
				A[j+1] = A[j];
				A[j] = temp;
			}
		}
	}
	printf("Sorted list is: \n" );
	for(int i = 0 ; i< n ; i++)
	{
		
		printf("%d ", A[i]);
	}
	printf("\n");
}