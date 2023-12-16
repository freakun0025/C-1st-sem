#include<stdio.h>
int make_integer(int h, int t, int u)
{
	int number;
	number=(h*100)+(t*10)+(u);
	return number;
}
int min_digit(int integer)
{
	int a,b,c;
	//a=units digit, b=tens digit, c=hundreds digit
	a=(integer%10);
	b=(integer%100-a)/10;
	c=(integer-a-(b*10))/100;
	int min;
	if(a<=b && a<=c)
		min=a;
	if(b<=a && b<=c)
		min=b;
	if(c<=a && c<=b)
		min=c;
	return min;
}
int max_digit(int integer)
{
        int a,b,c;
        //a=units digit, b=tens digit, c=hundreds digit
        a=(integer%10);
        b=(integer%100-a)/10;
        c=(integer-a-(b*10))/100;
        int max;
        if(a>=b && a>=c)
                max=a;
        if(b>=a && b>=c)
                max=b;
        if(c>=a && c>=b)
                max=c;
        return max;}

int mid_digit(int integer)
{
        int a,b,c;
        //a=units digit, b=tens digit, c=hundreds digit
        a=(integer%10);
        b=(integer%100-a)/10;
        c=(integer-a-(b*10))/100;
        int mid;
        if(a<=b && a<=c && b<=c)
                mid=b;
	if(a<=b && a<=c && c<=b)
		mid=c;
        if(b<=a && b<=c && a<=c)
                mid=a;
	if(b<=a && b<=c && c<=a)
		mid=c;
        if(c<=a && c<=b && b<=a)
                mid=b;
	if(c<=a && c<=b && a<=b)
		mid=a;
        return mid;}

int main()
{
	int x,b,s,y=1;
	printf("Read a 3-digit integer");
	scanf("%d",&x);
	while(y>0){	
	int min= min_digit(x);
	int max= max_digit(x);
	int mid= mid_digit(x);
	b = make_integer(max,mid,min);
	s= make_integer(min,mid,max);
	int n;
	n=(b-s);
	printf("%d - %d = %d\n",b,s,n);
	if(n==x){
	
	break;
	}
	else{
	x=n;}
	}

	return 0;}	



		
