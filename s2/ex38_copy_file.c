/*Addition, multiplication, subtraction of imaginary numbers using struct
Name : Adith Ramdas
Class : S2CS2
Date : 14/07/2022*/

#include <stdio.h>

int main(int argc , char *argv[])
{
	char ch;
	FILE *fp1, *fp2;
	fp1 = fopen(argv[1] , "r");
	fp2 = fopen(argv[2] , "w");
	while((ch=getc(fp1)) != EOF ){
		if(ch>=97)
			ch -= 32;
		putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}