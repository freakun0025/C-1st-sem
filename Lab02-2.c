#include<stdio.h>

int prime_check(int n);
int main(){
	//input
	int n;
	scanf("%d",&n);

	if (prime_check(n) == 5 )
		printf("%d is Prime\n",n);
	else 
		printf("%d is NOT a Prime\n",n);

	return 0;
}
int prime_check(int n){
	int i=2;
	while (i<n)
		if (n%i==0)
			return 1;
		else
			i++;


	return 5;
} 
