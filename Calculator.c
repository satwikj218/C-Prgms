// Write a prgm to generate a simple calculator using switch case
#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%c",&c);
	scanf("%d%d",&a,&b);
	switch(c)     // Switch Case Accepts only integer values
	{ 
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%f",(float)a/b);
			break;
		case '%':
			printf("%d",a%b);
			break;
		default:
			printf("Not correct Operator\n");
			break;
	}
}
