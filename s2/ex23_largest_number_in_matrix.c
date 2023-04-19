/*Largest number in a matrix
Name : Adith Ramdas
Class : S2CS2
Date : 07/06/2022*/
#include <stdio.h>

int main(void)
{
	int m , n,i ,j, large=0, temp,x,y;
	printf("Enter m: ");
	scanf("%d" , &m);
	printf("Enter n: ");
	scanf("%d" , &n);
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++ )
		{
			if(i == 0 && j== 0)
			{
				printf("Enter number: \n");
				scanf("%d" , &large);
				x=i+1; y =j+1;
				continue;
			}
			scanf("%d" , &temp);
			if(temp > large)
			{
				large = temp;
				x = i+1 ; y = j+1;
			}
		}
	}
	printf("Largest number : %d\n",large );
	printf("Postion : (%d,%d)\n",x,y );
	
}