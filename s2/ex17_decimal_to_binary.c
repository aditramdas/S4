
/*Decimal to Binary
Name : Adith Ramdas
Class : S2CS2
Date : 31/05/2022*/
#include <stdio.h>

int main(void)
{
	int n,i = 0, j =0,A[50], bin=0;
	printf("Enter the decimal number: ");
	scanf("%d" , &n);
	while(n>0)
	{
		A[i] = n%2;
		n /=2;
		i+=1;
	}
	while(j<i)
	{
		bin = A[i-1-j] + bin*10;
		j+=1;
	}
	printf("Binary : %d\n" , bin);
}