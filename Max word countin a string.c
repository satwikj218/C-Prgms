#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int curcount=0,prevcount=0,i;
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
			}
			curcount=0;
		}
	}
	if(prevcount<curcount)
	{
		prevcount=curcount;
	}
	printf("%d",prevcount);
	return 0;
}
