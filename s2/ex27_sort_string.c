/*Sort string in alphabetical order
Name : Adith Ramdas
Class : S2CS2
Date : 14/06/2022*/

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[1000],pos,temp;
	int i , j, large, count,y,k;
	printf("Enter string: ");
	fgets(s,101,stdin);
	for(i = 0 ; i < strlen(s)-2 ; i++ )
	{
		for(j = 0 ; j<strlen(s)-2-i ; j++ )
		{
			y=s[j];
			k=s[j+1];
			if (y<97)
			{
				y+=32;
			}
			if (k<97)
			{
				k+=32;
			}
			if(y > k)
			{
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
	printf("%s\n", s);
	
}