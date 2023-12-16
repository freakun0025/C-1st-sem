#include<stdio.h>
int main()
{
	int x,a;
        float b,c;
	printf("enter the integer");
	scanf("%d",&x);
       
	a=x*x*x;
	b=(3.14*x*x*x)/3;
	c=(4*3.14*x*x*x)/3;

	printf("Vol of a cube= %d",a);
	printf("\nVol of a right circular cone =%f",b);
	printf("\nVol of sphere =%f",c);
	return 0;
}
