#include<stdio.h>
int main(){
	int p[10];
	int a,i,b,x,c;
	a=1;
	x=0;
	b=1;
	c=0;
	while (b<11){
		i=1;
		x=0;
		while (i<=a){
			if (a%i==0)
				x=x+1;
			i=i+1;
		}
		if (x==2){
			p[c]=a;
			c+=1;
		b+=1;}
		a+=1;
	}


	for (i=0;i<10;i+=1){
		printf("%d\n",p[i]);
	}
}
