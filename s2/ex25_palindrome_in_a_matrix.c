/*Palindrome in matrix 
Name : Adith Ramdas
Class : S2CS2
Date : 07/06/2022*/

#include <stdio.h>

int main(void)
{
	int m , i ,A[100][100],j,org,k,l,p[100];
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
	printf("\n\n");
	for( i = 0 ; i < m ; i++ )
	{
		for(j = 0 ; j < m ; j++)
		{
			k = 0;
			org = A[i][j];
			while(org > 0)
			{
				p[k] = org%10;
				org /=10; 
				k++;
			}
			l = k;
			for(k = 0 ; k < l ; k++)
			{
				if (p[k] != p[l-k-1] )
				{
					break;
				}
			}

			if(k == l)
			{
				printf("%d   ", A[i][j] );
			}
		}
	}
	printf("\n");
}
