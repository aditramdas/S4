/*Linear Search
Name : Adith Ramdas
Class : S2CS2
Date : 31/05/2022*/

#include <stdio.h>
int main(void)
{
	int n, sear, A[50], i;
	printf("Enter number of terms: ");
	scanf("%d" , &n);
	printf("Enter the numbers : \n" );
	for(int i = 0 ; i < n ; i++) 
	{
		scanf("%d" , &A[i]);

	}
	
	printf("Enter the term you are searching for: ");
	scanf("%d" , &sear);
	for(i = 0 ; i < n ; i++)
	{
		if(A[i] == sear)
		{
			printf("Element is at position %d\n" , i+1);
			break;
		}
	}
	if(i == n)
		printf("Element not present\n" );
}