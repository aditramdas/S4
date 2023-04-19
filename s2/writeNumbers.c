/*Writing and reading numbers
Name : Adith Ramdas
Class : S2CS2
Date : 14/07/2022*/

#include <stdio.h>

int main(void)
{
	int n, con;
	FILE *fp = fopen("num.dat" , "w");
	do
	{
		printf("Enter the number: ");
		scanf("%d" , &n);
		putw(n , fp);
		printf("Do you want to continue(1/0): ");
		scanf("%d" , &con);
	}
	while (con == 1);
}