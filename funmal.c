#include<stdio.h>
#include<stdlib.h>
void print_array(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int *new_array(int n){
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    return p;
}
void delete_array(int *p){
    free(p);
    printf("\nSuccessfully de-allocated memory");
}
int main(){
    int n;
    printf("Read an integer n: ");
    scanf("%d",&n);
    int *p= new_array(n);
    print_array(p,n);
    delete_array(p);
    return 0;
}