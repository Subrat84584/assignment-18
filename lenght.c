//lenght of the string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter your string");
	fgets(str,20,stdin);
	int l=strlen(str);
	printf("lengh of the string is:%d",l);
	return 0;
}
