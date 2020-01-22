#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],ch='!';
	int len,j,i,k;
	scanf("%[^\n]s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]!=32)
		{
			k=s[i]-64;
			for(j=0;j<k;j++)
			{
				printf("%c",ch);
			}
			if(ch=='!')
			{
				ch='@';
			}
			else if(ch=='@')
			{
				ch='$';
			}
			else if(ch=='$')
			{
				ch='!';
			}
		}
		else
		{
			printf("\n");
			ch='!';
		}
	}
	return 0;
}
