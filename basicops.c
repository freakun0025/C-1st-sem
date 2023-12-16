#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[30];
        int rollno;

    }stu;
    //Reading contents in array s
    stu s[10];
    int n;
    printf("Read an integer n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Read name: ");
        scanf("%s",s[i].name);
        printf("Read roll no.: ");
        scanf("%d",&s[i].rollno);
    }
    for(int i=0;i<n;i++){
        printf("The name is %s\t",s[i].name);
        printf("The rollno. is %d\n",s[i].rollno);
    }
    //Maximum roll no.
    int max1;
    char app[30];
    max1=s[0].rollno;
    strcpy(app,s[0].name);
    for(int i=0;i<n;i++){
        if(s[i].rollno>max1){
            max1=s[i].rollno;
            strcpy(app,s[i].name);
            
        }   
    }
    printf("The student with maximum rollno. is %s\t",app);
    printf("The maximum roll no. is %d\n",max1);
    
    //Comparison
    int i,j;
    printf("Read an integer i: ");
    scanf("%d",&i);
    printf("Read an integer j: ");
    scanf("%d",&j);
    printf("The result of comparison is: %d\n",strcmp(s[i].name,s[j].name));
    //if s[i].name>s[j].name then the result will be a positive value.

    //Swapping
    printf("Read an integer i: ");
    scanf("%d",&i);
    printf("Read an integer j: ");
    scanf("%d",&j);
    stu temp=s[i];
    s[i]=s[j];
    s[j]=temp;

    //Swapping using pointers
    printf("Read an integer i: ");
    scanf("%d",&i);
    printf("Read an integer j: ");
    scanf("%d",&j);
    stu *p=&s[i];
    stu *q=&s[j];
    stu var=*p;
    *p=*q;
    *q=var;

    stu *yonex=p;
    p=q;
    q=yonex;
    printf("The name is %s and the roll no. is %d\n",p->name,p->rollno);
    printf("The name is %s and the roll no. is %d\n",q->name,q->rollno);

    //Printing using pointers
    printf("Printing using pointer: \n");
    stu *ptr=s;
    for(;ptr<s+n;ptr++){
        printf("The name is %s and the roll no. is %d\n",ptr->name,ptr->rollno);
    }
   return 0;
}

