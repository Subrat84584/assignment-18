//count word
#include<stdio.h>
#include<string.h>
int word(char s[]);
int main()
{
	char str[200];
	printf("enter a string");
	gets(str);   //type my name is
	word(str);
}
int word(char str[])
{
	int i,c=0,str1[100],str2[100],str3[100];
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
			if(c==0)
			{
				 str1[i]==str[i];
			}
		}
		else if(str[i]==' ')
		{
		  c++;
	    }
	    if(str[i]!=' ')
	    {
	    	if(c==1)
	    	{
	    		str2[i]==str[i];
			}
		}
		else if(str[i]==' ')
		{
			c++;
		}
		if(str[i]!=' ')
		{
			if(c==2)
			{
				str3[i]==str[i];
			}
		}
		
	}
	printf("%s",str1);
	printf("%s",str2);
	printf("%s",str3);
	
	return 0;
}
