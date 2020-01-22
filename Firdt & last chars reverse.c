#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,len=0,n;
	scanf("%s",s);
	scanf("%d",&n);
	len=strlen(s);
	for(i=0;i<n;i++)
	{
		printf("%c",s[n-1-i]);
	}
	for(i=n;i<len-n;i++)
	{
		printf("%c",s[i]);
	}
	for(i=len-1;i>=len-n;i--)
	{
		printf("%c",s[i]);
	}
	return 0;
}
