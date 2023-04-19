//Name : Adith Ramdas
//Roll Number : 5
//String FUnctions using poiint stringCopy(char *s1, char *s2)int stringCopy(char *s1, char *s2)int stringCopy(char *s1, char *s2)int stringCopy(char *s1, char *s2)nters
//Date : 12/07/2022
#include <stdio.h>
int stringLength(char *);
void stringCopy(char *, char *);
int stringComparison(char * , char *);
void stringConcatenation(char *s1 , char *s2);
int main(void)
{
	char s1[100], s2[100], s3[100];
	int i, j;
	printf("Enter string: " );
	scanf("%[^\n]", s1);
	
	stringCopy(s1, s2);
	printf("Enter string: " );
	scanf("%s", s3);
	printf("String Length : %d\n", stringLength(s1));
	// printf(stringComparison(s1 , s3)?"Strings are same" : "strings are different");
	printf("\n");
	stringConcatenation(s1 , s3);
	printf("%s\n", s1);
	printf("%d\n",stringComparison(s1,s3));

}
int stringLength(char *a)
{
	int length = 0;
	while(*a++)
		length++;
	return length;
}
void stringCopy(char *s1, char *s2)
{
	while(*s1)
		*s2++ = *s1++;
	*s2 = '\0';
}
void stringConcatenation(char *s1 , char *s2)
{
	int i = 0,k=0;
	while(*(s1++) != '\0' );
	s1--;
	while((*s1++ = *s2++) != '\0');

	*s1 = '\0';
}
int stringComparison(char *s1 , char *s2)
{
	int x = 1;
	while(x && *s1 != '\0' && *s2 != '\0') 
		if(*s1++ != *s2++){
			x = 0;
			return *(--s1) - *(--s2);
		}
	return x;
}
