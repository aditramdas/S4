#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,dis;
	printf("Enter the coefficients: ");
	scanf("%d%d%d" , &a,&b,&c);
	dis = b*b - 4*a*c;
	if(dis>0)
	{
		printf("The roots are: %f & %f\n",(float)(-b + sqrt((float)dis))/(2*a) , (-b - sqrt((float)dis))/(2*a));
	}
	else if(dis==0)
	{
		printf("The roots are: %f\n",(float)(-b + sqrt((float)dis))/(2*a));
	}
	else
	{
		printf("Imaginary roots are : %f + i%f & %f - i%f\n" ,(float)(-b/(2*a)) , sqrt(-dis)/(2.0*a) , (float)(-b/(2*a)) , sqrt((float)-dis)/(2.0*a) );
	}
}
