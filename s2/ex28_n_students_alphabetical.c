/*Names in alphabetical order
Name : Adith Ramdas
Class : S2CS2
Date : 18/06/2022*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char A[100][100] , temp[100];
	int i,n,j;
	printf("Enter number of students: ");
	scanf("%d" , &n);
	for(i = 0 ; i< n ; i++)
	{
		scanf(" %[^\n]" ,A[i]);
	}
	for(i = 0 ; i < n ; i++)
	{
		for(j = i+1; j < n ; j++)
		{
			if(strcmp(A[i], A[j])>0)
			{
				strcpy(temp , A[i]);
				strcpy(A[i], A[j]);
				strcpy(A[j], temp);
			}
		}
	}
	printf("\n\n");
	for(i = 0 ; i < n ; i++)
	{
		printf("%s\n", A[i]);
	}

}