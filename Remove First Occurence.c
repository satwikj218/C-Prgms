#include<stdio.h>
int main()
{
	char s[100],s1;
	int i,count=0;
	gets(s);
	scanf("%c",&s1);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==s1&&count==0)
		{
			i++;
			count++;
		}
		printf("%c",s[i]);
	}
}
