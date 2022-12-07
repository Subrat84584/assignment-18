//write a program to print the string is palimdrom or not.
#include<stdio.h>
#include<string.h>
int palindrom(char s[]);
int main()
{
	char str[20];
	printf("enter a string :");
	gets(str);
	if(palindrom(str))
	printf("palindrom");
	else
	printf("not palindrom");
}
int palindrom(char s[])
{
	int i;
	int l=strlen(s);
	for(i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-1-i])
        return(0);
}
	return(1);
}
