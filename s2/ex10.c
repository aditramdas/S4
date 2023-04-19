#include <stdio.h>
int main(void)
{
	int a, year, leap_year;
	printf("Enter Month: \n");
	scanf("%d",&a );
	switch(a) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("Number of days : %d\n", 31);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("Number of days : %d\n", 30 );
		break;
	case 2:
		printf("Enter year: ");
		scanf("%d" , &year);
		leap_year = (year%4 == 0 && year % 100) != 0 ? 0 : (year % 400 == 0) ? 0 : 1;
		printf(leap_year == 0 ? "29\n" : "28\n");
	}
}