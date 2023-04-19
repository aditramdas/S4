#include <stdio.h>
int main(void)
{
	int a, leap_year;
	printf("Enter any year: ");
	scanf("%d", &a);
	leap_year = (a%4 == 0 && a % 100) != 0 ? 0 : (a % 400 == 0) ? 0 : 1;
	printf(leap_year == 0 ? "Leap Year\n" : "Not a Leap Year\n");
}
