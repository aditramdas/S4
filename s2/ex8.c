#include <stdio.h>
int main(void)
{
	char ch, conv;
	printf("Enter the character: ");
	scanf("%c" , &ch);
	conv = ch > 'a' && ch < 'z' ? ch - 32 : ch > 'A' && ch < 'Z' ? ch + 32 : ch;
	printf("%c\n" , conv);
}
