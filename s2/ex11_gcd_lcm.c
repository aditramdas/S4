//Name : Adith Ramdas
//Roll Number : 5
//Find GCD and LCM
#include <stdio.h>
int main(void)
{
	int a,b, pro, temp;
	printf("Enter the numbers : ");
	scanf("%d %d", &a , &b);
	pro = a*b;
	while(b>0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	printf("GCD : %d\n", a );
	printf("LCM : %d\n", pro/a );


}