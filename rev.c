#include<stdio.h>
int main()
{
	int a,b,r,s=0;
	printf("enter a number");
	scanf("%d",&a);
	for(b=a;b>0;b=b/10)
{
		r=b%10;
		s=s*10+r;
}
	printf("reverse=%d",s);
	return 0;
}
