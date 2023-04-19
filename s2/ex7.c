#include <stdio.h>
int main(void)
{
	int a , b,c , small;
	printf("Enter three numbers: " );
	scanf("%d%d%d" , &a , &b, &c);
	small = a < b ? a < c ? a : c : b < c ? b : c ;
	printf("%d\n" ,small); 
}

