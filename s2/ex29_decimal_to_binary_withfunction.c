/*Decimal to Binary with function
Name : Adith Ramdas
Class : S2CS2
Date : 01/07/2022*/
#include <stdio.h>
int DtoB(int n);
int main(void)
{
	int n , a[100],k;
	printf("Enter number of terms : ");
	scanf("%d" , &k);
	for(int i = 0 ; i < k ; i++)
	{
		scanf("%d" , &a[i]);
	}
	for(int j = 0 ; j < k ; j++) {
		DtoB(a[j]);
		printf("\n");
	}


}
int DtoB(int n)
{
	if(n == 1)
	{
		printf("%d", n);
		return 1;
	}
	DtoB(n/2);
	printf("%d",n%2 );

}
		