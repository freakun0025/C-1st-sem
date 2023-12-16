#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
        char name[30];
        int rollno;

    }stu;

stu *new_array(int n){
    stu *ptr=(stu*)malloc(n*sizeof(stu));
    for(int i=0;i<n;i++){
        printf("Enter name: \n");
        scanf("%s",ptr[i].name);
        printf("Enter rollno.: \n");
        scanf("%d",&ptr[i].rollno);
    }
    return ptr;
}
void print_array(stu a[],int n){
    for(int i=0;i<n;i++){
        printf("The name is %s and the roll no. is %d\n",(a+i)->name,(a+i)->rollno);
    }
}
void bubble_sort(stu a[],int n){
    for(int h=n-1;  h>0;  h--){
     for(int i=0;  i<h;  i++){
            if  (a[i].rollno > a[i+1].rollno){
                stu temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
     }
    }
}
void delete_array(stu a[]){
    free(a);
}
int main(){
    stu *s= NULL;
    int n;
    printf("Read an integer: ");
    scanf("%d",&n);
    s=new_array(n);
    print_array(s,n);
    bubble_sort(s,n);
    print_array(s,n);
    delete_array(s);
    printf("The address is %p",s);
    return 0;
}