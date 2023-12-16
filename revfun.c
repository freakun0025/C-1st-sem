#include<stdio.h>
int reverse_int(int a)
{
       int b,r,s=0;	
       for(b=a;b>0;b=b/10)
    {
        r=b%10;
        s=s*10+r;
    }
    return s;
}
int main()
{
	int a;

	printf("enter a number");
	scanf("%d",&a);
	int s = reverse_int(a);
	printf("reverse=%d",s);
	return 0;
}
