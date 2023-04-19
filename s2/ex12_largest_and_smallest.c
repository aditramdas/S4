//Name : Adith Ramdas
//Roll Number : 5
//Find largest and smallest of N numbers
#include <stdio.h>

int main(void)
{
	int n, small = 0, large = 0, x;
	printf("Enter number of terms: ");
	scanf("%d" , &n);
	printf("Enter number 1 : ");
	scanf("%d" , &small);
	large = small;
	for(int i = 2 ; i <= n ; i++)
	{
		printf("Enter number %d : ",i );
		scanf("%d", &x);
		if (x < small)
		{
			small = x;
		}
		if( x > large)
		{
			large = x;
		}
	}
	printf("Smallest : %d\n" , small);
	printf("Largest : %d\n" , large);	
}