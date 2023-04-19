/*Detail storing with struct
Name : Adith Ramdas
Class : S2CS2
Date : 01/07/2022*/

#include <stdio.h>
int main(void)
{
	struct detail
	{
		char name[50];
		int reg_no;
		int mark1;
		int mark2;
		int mark3;
		int mark4;
	};
	int n,i, j , total1, total2;
	struct detail temp;
	printf("Enter the number of students: ");
	scanf("%d" , &n);
	struct detail class[20];
	for(i = 0; i < n ; i++)
	{
		printf("Enter the name of student %d: " , i+1);
		scanf(" %[^\n]", class[i].name);
		printf("Enter the regno of student %d: ", i+1);
		scanf("%d" , &class[i].reg_no);
		printf("Enter the four marks of student %d : ", i+1);
		scanf("%d %d %d %d" ,&class[i].mark1 , &class[i].mark2 , &class[i].mark3 , &class[i].mark4 );
	}
	for(i = 0 ; i < n-1 ; i++)
	{
		for( j = 0 ; j < n-i-1 ; j++)
		{
			total1 = class[j].mark1 + class[j].mark2 + class[j].mark3 + class[j].mark4;
			total2 = class[j+1].mark1 + class[j+1].mark2 + class[j+1].mark3 + class[j+1].mark4;
			if(total1 < total2)
			{
				temp = class[j];
				class[j] = class[j+1];
				class[j+1] = temp;
			}
		}
	}
	for(i = 0 ; i< n ; i++)
	{
		printf("Details of student %d : \n", i+1) ;
		printf("Name : %s\n",class[i].name );
		printf("Regno : %d\n", class[i].reg_no);
		printf("Mark1 : %d\n", class[i].mark1);
		printf("Mark2 : %d\n", class[i].mark2);
		printf("Mark3 : %d\n", class[i].mark3);
		printf("Mark4 : %d\n", class[i].mark4);
	}
}