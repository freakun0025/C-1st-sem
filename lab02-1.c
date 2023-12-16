#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the first value");
	scanf("%d",&a);
	printf("Enter the second value");
	scanf("%d",&b);
	printf("Enter the third number");
	scanf("%d",&c);
    d= (b^2)-4*a*c;
    if(d>=0)
    {
	    printf("Real roots exist");
    }
    else
    {
	    printf("Non real roots exist");
    }
    return 0;
}
