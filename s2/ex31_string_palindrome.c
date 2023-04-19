/*String palindrome with functions
Name : Adith Ramdas
Class : S2CS2
Date : 18/06/2022*/

#include <stdio.h>
#include <string.h>
int palindrome(char a[] ,int j);
int main(void)

{
	char a[100],b[100],c,k;
	int i, j ;
	printf("Enter the string: ");
	scanf("%[^\n]" , a);
	for(int i = 0 ; i <= strlen(a) ; i++)
	{	
		
		if(a[i] == ' ' || a[i] == '\0')
		{
			b[i] = '\0';
			if(palindrome(b , k)){
				for(int l = 0 ; l < k ; l++)
					printf("%c", b[l]);
			printf("\n");
		}
			k = 0;
		}
		else
		{
			b[k++] = a[i];
		}
	}
}
int palindrome(char a[] , int j)
{
	for(int i = 0 ; i < (j) ; i++)
	{
		if(a[i] != a[j-1-i])
			return 0;
	}
	return 1;
}