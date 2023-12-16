#include<stdio.h>
int main(){
	int a[10];
	int i=0;
	while (i<5){
		scanf("%d",&a[i]);
		i+=1;
	}
	i=0;
	while (i<5){
		a[i+5]=a[i];
		i+=1;
	}
	i=0;
	while(i<10){
		printf("%d\n",a[i]);
		i+=1;
	}
}
