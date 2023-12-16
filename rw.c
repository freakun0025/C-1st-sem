#include<stdio.h>
int main()
{
	int a[10],i=0;
	while(i<=4){
		printf(" ");
		scanf("%d",&a[i]);
		
	
		if(i%2==0){
			a[i]=a[i]+1;
		}
		else{
			a[i]=a[i]-1;
		}
		i++;
	}
	printf(" %d\n %d\n %d\n %d\n %d\n",a[0],a[1],a[2],a[3],a[4]);
	
	return 0;
}
		
		
		
