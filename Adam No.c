#include<stdio.h>
int main()
{
	int n1,n2,sqr1=0,sqr2=0,rem1=0,rev1=0,rev2=0,rem2=0;
	scanf("%d",&n1);
	sqr1=n1*n1;
	while(n1!=0)
	{
		rem1=n1%10;
		rev1=(rev1*10)+rem1;
		n1/=10;
	}
	sqr2=rev1*rev1;
	while(sqr2!=0)
	{
		rem2=sqr2%10;
		rev2=(rev2*10)+rem2;
		sqr2/=10;
	}
	if(rev2==sqr1)
		printf("Adam No.");
	else
		printf("Not a Adam No.");
}
