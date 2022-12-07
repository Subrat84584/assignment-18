//reverse word
#include<stdio.h>
#include<string.h>
int main()
{
	char str[200];
	printf("enter your string: ");
	gets(str);
	rev(str);
}
int rev(char s[])
{
	int i,j;
	puts(s);
	puts("after reverse\n");
	int l=strlen(s);
	printf("%d\n",l);
	for(i=l-1;i>=0;i--)
	{
		if(s[i]==' ')
		
		
	}
	return 0;
}
