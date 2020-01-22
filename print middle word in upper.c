#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,count=0,j;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==32)
		{
			count++;
		}
		if(count==1)
		{
			if(s[i]>=65&&s[i]<=90)
			{
				printf("%c",s[i]);
			}
			else if(s[i]>=97&&s[i]<=122)
			{
				printf("%c",s[i]-32);
			}
		}
		if(count==2)
		{
			break;
		}			
	}
	return 0;
}
