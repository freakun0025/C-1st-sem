#include <stdio.h>
#include <stdlib.h>

struct node{
	int val;
	struct node * next;
};
typedef struct node Node;

Node * newNode(){
	return malloc(sizeof(Node));
}
//1)
int lengthLL(Node*head){
	if(head==NULL){
		return 0;
	}
	return 1 + lengthLL(head->next);
}
//2)
void printValLL(Node*head){
	if(head==NULL){
		return;
	}
	printf("%d ",head->val);
	printValLL(head->next);
}
//3)
void printValReverseLL(Node * head){
	if(head==NULL){
		return;
	}
	printValReverseLL(head->next);
	printf("%d ",head->val); 
}
//4)
int getValAtHeadLL(Node * head){
	return head->val;
}
//5)
int getValAtTailLL(Node * head){
	if(head->next==NULL){
		return head->val;
	}
	getValAtTailLL(head->next);
}
//6)
int getValAtPosLL(Node*head,int pos){
	if(pos==0){
		return head->val;
	}
	getValAtPosLL(head->next,pos-1);
}
//7)
Node * deleteNodeAtPosFromLL(Node*head,int pos){
	if(head==NULL){
		return head;
	}
	if(pos==0){
		Node * rest = head->next;
		free(head);
		return rest;
	}
	Node * rest = deleteNodeAtPosFromLL(head->next,pos-1);
	head->next = rest;
	return head;
}
//8)
Node * deleteMatchingNodesFromLL(Node*head,int val){
	if(head==NULL){
		return head;
	}
	if(head->val==val){
		Node * rest = head->next;
		free(head);
		return deleteMatchingNodesFromLL(rest,val);
	}
	else{
		Node * rest = deleteMatchingNodesFromLL(head->next,val);
		head->next=rest;
		return head;
	}
}
//9)
Node * addNodeToHeadLL(Node*head,Node*new){
	new->next = head;
	head = new;
	return head;
}
//10)
Node * addNodeToTailLL(Node*head,Node*new){
	if(head->next==NULL){
		head->next = new;
		new->next = NULL;
		return head;
	}
	addNodeToTailLL(head->next,new);
}
//11)
Node * addNodeToPosLL(Node*head,int pos,Node*new){
	if(head==NULL){
		head = new;
		return head;
	}
	else if(pos==1){
		new->next = head->next;
		head->next = new;
		return head;
	}
	else{
	     head->next = addNodeToPosLL(head->next,pos-1,new);
	     return head;
	}
} 
//12)
 
Node * joinLL(Node * head1,Node * head2){
	if(head1->next==NULL){
		head1->next=head2;
		return head1;
	}
	joinLL(head1->next,head2);
}

int freeUpLL(Node*head){
	Node * p = head->next;
	if(head->next==NULL){
		free(head);
		return 1;
	}
	else{
		free(head);
		return 1 + freeUpLL(p);
	}
}
//13)
Node * reverseLL(Node * head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node * reversedhead = reverseLL(head->next);
	head->next->next=head;
	head->next = NULL;
	return reversedhead;
}

int main(){
	Node * head = newNode();
	head->val = 00;
	Node * a=newNode();
	a->val = 10;
	head->next = a;
	Node * b = newNode();
	b->next=NULL;
	b->val=20;
	a->next = b;

        Node*c = newNode();
	c->val=30;
	Node * d = newNode();
	d->val=40;
	d->next=NULL;
	c->next = d;

	Node*e = newNode();
	e->val=00;
	Node * f = newNode();
	f->val=60;
	Node*g = newNode();
	g->val=70;
	e->next=NULL;

	printf("Lenght of LL is %d\n",lengthLL(head));

	printf("Printing the list\n");
	printValLL(head);
	printf("\n");

	printf("The reversed LL is:\n");
	printValReverseLL(head);
	printf("\n");

	printf("Value we got at head : %d\n",getValAtHeadLL(head));
	printf("Value we got at tail : %d\n",getValAtTailLL(head));
	printf("Value we got at Index1 : %d\n",getValAtPosLL(head,1));

	printf("Adding a node to head \n");
	head = addNodeToHeadLL(head,e);
	printValLL(head);
        printf("\n");

	printf("Adding node to tail\n");
	addNodeToTailLL(head,f);
	printValLL(head);
	printf("\n");

	printf("Adding node to index 2\n");
        head = addNodeToPosLL(head,2,g);
	printValLL(head);
	printf("\n");

	printf("Joining two linked lists\n");
	joinLL(head,c);
	printValLL(head);
	printf("\n");

	printf("Deleting a node from LL (3)\n");
	head = deleteNodeAtPosFromLL(head,3);
	printValLL(head);
	printf("\n");

	printf("Deleting matching nodes from linked list (0) \n");
	head = deleteMatchingNodesFromLL(head,0);
	printValLL(head);
	printf("\n");

	printf("The reversed linked list is:\n");
	head = reverseLL(head);
	printValLL(head);
	printf("\n");

	printf("Freeing the linked list\n");
	printf("%d\n",freeUpLL(head));
}
