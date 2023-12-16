#include<stdio.h>
int main()
{
	int arr[20],n,i;
	printf("Read an integer: ");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		scanf("%d",&arr[i]);
		arr[i-1]=arr[i];
			if(i==n)
			{
				arr[i]=-1;
			}
	}	
	while(i>0 && i<n+1){
		printf("%d\n",arr[i]);
		i++;
	}
		
	
	
return 0;
}

			

