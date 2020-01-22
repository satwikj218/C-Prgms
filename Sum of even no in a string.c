#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int sum=0,i;
	scanf("%[^\n]s",x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]>='0'&&x[i]<='9')
		{
			if((x[i]-48)%2==0) // x[i]-48 to convert it into number from ascii value.
			{
				sum+=(int)(x[i])-48;	
			}
		}
	}
	printf("%d",sum);
	return 0;
}
