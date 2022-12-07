//6alphanumric
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],A=0,D=0;
	printf("entre your string");
	fgets(str,20,stdin);
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{
		   A=1;
	    }
	    if(str[i]>='0'&&str[i]<='9')
	    {
	    	D=1;
		}
	}
	if(A==1&&D==1)
	{
		printf("This is alphanumeric string");
	}
	else
	{
		printf("This is not alphanumeric");
	}
	return 0;
	
}
