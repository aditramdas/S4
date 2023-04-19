/*Factorial with functions
Name : Adith Ramdas
Class : S2CS2
Date : 18/06/2022*/
#include <stdio.h>

long fact(int a);
int main(void)
{
	int n,r,i,j;
	printf("Enter n: ");
	scanf("%d" , &n);
	printf("\nEnter r: ");
	scanf("%d" , &r);
	printf("%ld\n", fact(n)/(fact(r)*fact(n-r)));
}
long fact(int a)
{
	if(a == 1)
		return 1;
	return a*fact(a-1);
}