#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}Node;
Node *front = NULL;
Node *rear = NULL;
void enqueue(int data){
	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode -> data = data;
	newnode -> next = NULL;
	if(rear==NULL){
		rear=newnode;
		front = rear;
	}else{
		rear -> next = newnode;
		rear = newnode;
	}
}
int dequeue(){
	if(front==NULL)
		return -1;
	else { 
		Node *temp = front;
		int val = front -> data;
		front = front -> next;
		if(front==NULL)
			rear=NULL;
		free(temp);
		return val;
	}
}
int peek(){
	if(front==NULL)
		return -1;
	else 
	return front -> data;
}
void display(){
	Node *temp = front;
	while(temp!=NULL){
		printf("%d -> ",temp -> data);
		temp = temp -> next;
	}
	printf("NULL \n");
}