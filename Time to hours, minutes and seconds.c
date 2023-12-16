#include<stdio.h>
int main()
{
	//input
	int a,b,c,d;
	printf("Enter seconds");
	scanf("%d",&a);
	
        b=a/3600;
	c=(a-b*3600)/60;
	d=(a-b*3600)%60;
		

	 
	

	//printing
	printf("hours: %d\n, minutes: %d, seconds: %d\n",b,c,d);
	return 0;
}
