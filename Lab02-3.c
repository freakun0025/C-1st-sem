#include<stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	switch (x){
		case 1:
			printf("This ");
		case 2:
			printf("is ");
		case 3:
			printf("the ");
		case 4:
			printf("house ");
		case 5:
			printf("that ");
		case 6:
			printf("Jack ");
		case 7:
			printf("built\n");
			break;
		default:
			printf("Error\n");
	}
	return 0;
}
