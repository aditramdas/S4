/*Adding polynomials using struct
Name : Adith Ramdas
Class : S2CS2
Date : 18/06/2022*/
#include <stdio.h>
int main(void)
{
	int n1, n2, i, j,t=0;
	struct element{
		int coef;
		int pow;
	};
	struct element poly1[20];
	struct element poly2[20];
	struct element addedpoly[20];
	printf("Enter number of terms in polynomial 1: ");
	scanf("%d" , &n1);
	printf("Enter number of terms in polynomial 2: ");
	scanf("%d" , &n2);
	printf("Enter terms in their decreasing powers: \n");
	printf("For polynomial 1: \n");
	for (i = 0; i < n1; ++i)
	{
		printf("Enter coefficient: ");
		scanf("%d" , &poly1[i].coef);
		printf("Enter power: ");
		scanf("%d" , &poly1[i].pow);
	}
	printf("For polynomial 2: \n");
	for (i = 0; i < n1; ++i)
	{
		printf("Enter coefficient: ");
		scanf("%d" , &poly2[i].coef);
		printf("Enter power: ");
		scanf("%d" , &poly2[i].pow);
	}
	i = 0; j = 0;
	while(i < n1 && j < n2)
	{
		if(poly1[i].pow > poly2[i].pow)
		{
			addedpoly[t] = poly1[i];
			t++;
			i++; 
		}
		if(poly1[i].pow < poly2[i].pow)
		{
			addedpoly[t] = poly2[j];
			t++;
			j++;
		}
		else if(poly1[i].pow == poly2[i].pow)
		{
			addedpoly[t] = poly2[j];
			addedpoly[t].coef += poly1[i].coef;
			t++;
			j++;
			i++;
		}	
			
	}
	while(i < n1) addedpoly[t++] = poly1[i++];
	while(j < n2) addedpoly[t++] = poly2[j++];
	for (int i = 0; i < t; ++i)
		printf("%dx^%d + ", addedpoly[i].coef , addedpoly[i].pow);
	printf("0\n");

}