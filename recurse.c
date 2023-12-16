#include<stdio.h>
int b(int n){
	if (n==0 || n==1 )
		return 1;

	return  b(n/2)+1;
}

int main(){
	int x;
	scanf("%d",&x);
	printf("%d",b(x));

	return 0;
}	
