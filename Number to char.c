// Write a prgm to read a single digit no. and print the no. in letters
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
		case 10:
			printf("Ten");
			break;
	}	
}
