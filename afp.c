#include<stdio.h>
#include<string.h>
void swap(char *c,int i,int j){
    int temp=c[i];
    c[i]=c[j];
    c[j]=temp;
}
void reverse(char *c){
    size_t n = strlen(c);
    for(int i=0;i<n/2;i++){
        swap(c,i,n-1-i);
    }
}
int main(){
    char x[20];
    scanf("%s",x);
    
    if (strcmp(x,"end")==0 || strcmp(x,"finish")==0 || strcmp(x,"done")==0 || strcmp(x,"halt")==0){
        return 0;
    }
    else{
        reverse(x);
        printf("%s",x);
    }
    return 0;

}