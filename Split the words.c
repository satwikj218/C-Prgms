#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int n,i,k,len=0;   // fflush(stdin); --> is used to clear the buffer memory while taking 2 scanfs of diff types -> 
	scanf("%d",&n);    // ->if garbage value is stored
	len=strlen(s);
	k=len/n;
	if(len%n!=0)
	{
		printf("-1");
	}
	else
	{
		for(i=0;s[i]!='\0';i++)
		{
			if(i%k==0&&i!=0)
			{
				printf(" ");
			}
			printf("%c",s[i]);
		}
		printf(" ");
		k=0;
	}
	return 0;
}
