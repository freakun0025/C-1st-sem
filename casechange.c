#include<stdio.h>
int main()
{
	char str[10];
	int i=0;
	printf("Read a string: ");
	scanf("%s",str);
	while(i<10){
		if(str[i]!='\0'){
		str[i]=str[i]-'a'+'A';
		}
			
		else{
			str[i]='\0';
		}
		i++;
	}
	printf("%s\n",str);


	
	return 0;
}

