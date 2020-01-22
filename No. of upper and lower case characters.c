/*
ASCII Values:
A - Z --> 65 - 90
a - z --> 97 - 122
0 - 9 --> 48 - 57
space --> 32
*/

#include<stdio.h>
int main()
{
	char s[100];
	int count=0,count1=0,i;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			count++;
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			count1++;
		}
	}
	printf("U : %d L : %d",count1,count);
	return 0;
}
