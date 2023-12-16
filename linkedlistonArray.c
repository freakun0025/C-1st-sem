#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    int rollno;
    struct student *next;
} stu;

int main(){
    stu a[10];
    //questions 1-5:
    for(int i=0;i<10;i++){
        a[i].rollno=100+i;
        a[i].next=&a[(i+3)%10];
    }
    a[7].next=NULL;
    stu *p;
    int i;
    int x=1;
    while(x){
        printf("Read an integer i: ");
        scanf("%d",&i);
        if(i<=9 && i>=0){
            p=&a[i];
            for(p=&a[i]  ;   p != NULL  ; p=p->next) { // call this the print loop starting at a[i]
                  printf("%d    ",p->rollno);
        }
        printf("\n"); 
     }
     else{
        x=0;
     }

    }

    //questions 6-9:
    stu w;
    w.rollno=999;
    w.next=&a[6];
    for(p=&w;p!=NULL;p=p->next){
        printf("%d  ",p->rollno);

    }
    printf("\n");
    //questions 10-11:
    a[3].next=&w;
    for(p=&a[0];p!=NULL;p=p->next){
        printf("%d  ",p->rollno);
    }
    return 0;
    }
