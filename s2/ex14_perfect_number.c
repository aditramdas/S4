//Find all perfect numbers until N
//Name : Adith Ramdas
//Roll Number : 5
//Date - 24/05/2022


#include <stdio.h>
int main(void)
{
	int n , num =1 , fact , sum;
	
	printf("Enter N :");
	scanf("%d",&n);
	while(num <= n)
	{
		fact = 1;
		sum = 0;
		while(fact <= num/2)
		{
			if(num%fact == 0)
				sum += fact;
			fact += 1;
		}
		if (sum == num)
			printf("%d\n", num);
		num += 1;
	}
}