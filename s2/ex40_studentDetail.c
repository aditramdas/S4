/*Student Detail
Name : Adith Ramdas
Class : S2CS2
Date : 14/07/2022*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[25];
	int  mark1 , mark2 , mark3 , mark4, mark5, mark6 , con, flag = 0;;
	long regno , user;
	FILE *fp = fopen("STUDENT.DAT", "r");
	printf("Enter student regno: ");
	scanf(" %ld" , &user);
	while((fscanf(fp , "%6ld%25c%3d%3d%3d%3d%3d%3d" , &regno , name , &mark1 , &mark2 , &mark3 , &mark4 , &mark5 , &mark6)) != EOF){
		if(user == regno)
		{
			name[25] = '\0';
			printf("%6ld %-25s %-3d %-3d %-3d %-3d %-3d %-3d  ", regno, name, mark1, mark2, mark3, mark4, mark5, mark6);
			printf("\n");
			// fseek(fp , 0 , 0);
			break;
		}

		
	}
	printf("Do you want to continue(1/0): \n");
		scanf(" %d" ,&con );
		if(con == 1)
			main();

		fclose(fp);
}