//Name : Adith Ramdas
//Roll Number : 5
//Convert  binary to decimal
#include <stdio.h>
#include <math.h>

int main(void)
{
	int power=0 , bin=0 , n;
	printf("Enter binary number : ");
	scanf("%d" , &n);
	while(n>0)
	{
		bin += (n%10)*pow(2 , power);
		power +=1;
		n = n/10;
	}
	printf("Decimal Number : %d\n",bin);
}