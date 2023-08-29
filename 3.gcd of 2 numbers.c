#include<stdio.h>
int main()
{
	int a,b,i,gcd;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	for(i=0;i<=a&&i<=b;++i)
	{
		if(a%1==0&&b%1==0)
		gcd=i;
	}
	printf("gcd of %d and %d is %d",a,b,gcd);
	return 0;
}
