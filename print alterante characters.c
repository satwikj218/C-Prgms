#include<stdio.h>
#include<string.h>
int main()
{
	char x[100],y[100];
	int i,len=0,len1=0;
	scanf("%s",x);
	scanf("%s",y);
	for(i=0;x[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;y[i]!='\0';i++)
	{
		len1++;
	}
	if(len==len1)
	{
		for(i=0;x[i]!='\0';i++)
		{
			printf("%c%c",x[i],y[i]);
		}
	}
	else if(len>len1)
	{
		for(i=0;y[i]!='\0';i++)
		{
			printf("%c%c",x[i],y[i]);
		}
		for(i=len1;x[i]!='\0';i++)
		{
			printf("%c",x[i]);
		}
	}
	else if(len1>len)
	{
		for(i=0;x[i]!='\0';i++)
		{
			printf("%c%c",x[i],y[i]);
		}
		for(i=len;y[i]!='\0';i++)
		{
			printf("%c",y[i]);
		}
	}
	return 0;
}
