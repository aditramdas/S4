/*Word count
Name : Adith Ramdas
Class : S2CS2
Date : 14/07/2022*/
#include <stdio.h>
int main(int argc , char *argv[])
{
	char ch;
	FILE *fp;
	int letters = 0 , words = 0 , lines = 0;
	fp = fopen(argv[1] , "r");
	while((ch=getc(fp)) != EOF )
	{
		if(ch == ' ' && fseek(fp , -1 , 1) != ' '){
			fseek(fp , 1 , 1);
			words++;
		}
		if(ch == '\n' && fseek(fp , -1 , 1) != '\n'){
			fseek(fp , 1 , 1);
			lines++;
		}
		letters++;
	}
	fclose(fp);
	printf("Number of letters = %d\n Number of words = %d\n Number of lines = %d\n", letters , words+lines , lines );
}