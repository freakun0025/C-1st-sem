#include<stdio.h>
char rot(char x){
	x=x-'a'+'b';
	return x;
}
int main()
{
	
	char str[100];
	int i=0;
	printf("Read a word: ");
	scanf("%s",str);
	while(i>=0 && i<100 && str[i]!='\0'){
		str[i]=rot(str[i]);
		i++;
		}
	
	printf("%s\n",str);
	return 0;
}
