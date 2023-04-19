//Find N prime numbers
//Name : Adith Ramdas
//Roll Number : 5
//Date - 24/05/2022

#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,count = 0 , num = 2, fact;

	printf("Enter N : " );
	scanf("%d" , &n);
	while(count < n)
	{
		for(fact = 2 ; fact <= sqrt(num) ; fact++)
		{
			if(num % fact == 0)
			{
				break;
			}
		}
		if(fact > sqrt(num))
		{
			printf("%d \n" , num);
			count += 1;
		}
		num += 1;
	}
}