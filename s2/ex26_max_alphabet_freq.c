/*Max_alpha_frequency
Name : Adith Ramdas
Class : S2CS2
Date : 14/06/2022*/

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[1000],pos;
	int i , j, large, count;
	printf("Enter the line of text: ");
	gets(s);
	for(i = 0 ; i < strlen(s) ; i++ )
	{
		count = 0 ;
		for(j = i ; j<strlen(s) ; j++ )
		{
			if(s[i] == s[j] || ((int)s[i] +32) == (int)s[j] || ((int)s[i] -32) == (int)s[j])
				count += 1;
		}
		if(i==0)
		{
			large = count;
			pos = s[i];
		}
		if(count > large)
		{
			large = count;
			pos = s[i];
		}
	}
	printf("Max occuring alphabet: %c\n",pos );
	printf("Frequency : %d\n", large);
}