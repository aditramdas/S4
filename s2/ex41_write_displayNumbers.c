/*Writing and reading numbers
Name : Adith Ramdas
Class : S2CS2
Date : 14/07/2022*/

#include <stdio.h>

int main(void)
{
	
	int n , con,ch , i , j, A[50], temp;
	char cp;
	FILE *fp = fopen("num.dat" , "r");
	i = 0;
	while((ch = getw(fp)) != EOF){
		A[i] = ch;
		printf("%d\n", A[i]);
		i++;
	}
	
	printf("Numbers in the ordered form: \n");
	for(j = 0 ; j < i-1 ; j++)
		for (int k = 0; k < i-j-1; ++k)
		{
			if(A[k] > A[k+1] )
			{
				temp = A[k];
				A[k] = A[k+1];
				A[k+1] = temp;
			}
		}
	for (j = 0; j < i; ++j)
	{
		printf("%d\n", A[j]);
	}

	


}