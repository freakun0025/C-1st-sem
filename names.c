#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *a[20];
    int n=0;

    
    while(1){
        char arr[100];
        printf("Read a string into the array: ");
        scanf("%s",arr);
        if(strcmp(arr,"halt")==0 || strcmp(arr,"exit")==0 || strcmp(arr,"end")==0){
            break;
        }
        else{
            int t=strlen(arr);
            char *p=(char*)malloc((t+1)*sizeof(char));
            strcpy(p,arr);
            
            a[n++]=p;
            }
        }
        for(int i=0;i<n;i++){
            printf("%s ",*(a+i));
            free(a[i]);
        }
        return 0;
}       