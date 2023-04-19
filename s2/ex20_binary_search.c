/*Binary Search
Name : Adith Ramdas
Class : S2CS2
Date : 31/05/2022*/

#include <stdio.h>

int main(void)
{
	int n,A[50], sear, mid;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("Enter the numbers: \n" );
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d" , &A[i]);
	}

	int top = 0 , bot = (n-1);
	printf("Enter the number you are searching for: " );
	scanf("%d" , &sear);
	while(top <= bot)
	{
		mid = (top+bot)/2;
		if(A[mid] == sear)
		{
			printf("Present at position %d\n", mid +1);
			break;
		}
		if(sear < A[mid])
		{
			bot = mid -1;
		}
		else
		{
			top = mid + 1;
		}
	}
	if( top > bot)
	{
		printf("Not present\n");
	}

}