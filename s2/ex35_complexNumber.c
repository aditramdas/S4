/*Addition, multiplication, subtraction of imaginary numbers using struct
Name : Adith Ramdas
Class : S2CS2
Date : 18/06/2022*/

#include <stdio.h>
int main(void)
{
	struct complex{
		int real;
		int imaginary;
	};
	struct complex num1, num2;
	printf("Enter real and imaginary part of number 1: ");
	scanf("%d %d", &num1.real , &num1.imaginary);
	printf("Enter real and imaginary part of number 2: ");
	scanf("%d %d", &num2.real , &num2.imaginary);
	printf("Sum : %d + i%d\n", num1.real + num2.real , num1.imaginary + num2.imaginary);
	printf("Difference : %d + (%d)i\n", num1.real - num2.real , num1.imaginary - num2.imaginary);
	printf("Product : %d + i%d\n", num1.real * num2.real , num1.imaginary * num2.imaginary);
}