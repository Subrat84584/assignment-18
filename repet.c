//reapeted 
#include<stdio.h>
#include<string.h>
int rep(char str[]);
int main()
{
	char str[20];
	printf("enter your name:");
	gets(str);
	rep(str);
}
int rep(char str[])
{
	int i;
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==str[i+1])
		printf("%c is the repeated character",str[i]);
	}
	return 0;
}
