#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			printf("%c",s[i]+1);
		else if(s[i]>'a'&&s[i]<'e')
			printf("e");
		else if(s[i]>'e'&&s[i]<'i')
			printf("i");
		else if(s[i]>'i'&&s[i]<'o')
			printf("o");
		else if(s[i]>'o'&&s[i]<'u')
			printf("u");
		else if(s[i]>'u'&&s[i]<='z')
			printf("a");
	}
	return 0;
}
