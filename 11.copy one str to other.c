#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter string: ");
	gets(str1);
	printf("\n string1=%s",str1);
	strcpy(str2,str1);
	printf("\n string2= %s",str2);
	return 0;
}
