#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int curcount=0,startindex,endindex,prevcount=0,k,i;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=32)
		{
			curcount++;
		}
		else if(s[i]==32)
		{
			if(prevcount<curcount)
			{
				prevcount=curcount;
				startindex=i-prevcount;
				endindex=i;
			}
			curcount=0;
		}
	}
	if(prevcount<curcount)
	{
		prevcount=curcount;
		startindex=i-prevcount;
		endindex=i;
	}
	for(i=startindex;i<=endindex;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
