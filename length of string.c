#include<stdio.h>
int main()
{
	char s[100];
	int len=0,i;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	printf("%d",len);
}
