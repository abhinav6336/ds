#include <stdio.h>
#define MAX 10
int queue[MAX],front=-1,rear=-1;
void push(int data){
	if(rear==MAX-1){
		printf("Queue Overflow !!\n");
		return ;
	}
	if(front==-1){
		front=0;
	}
	queue[++rear]=data;	
}
int pop(){
	if(front==-1){
		printf("Underflow !!\n");
		return -1;
	}
	int val = queue[front++];
	if(front>rear){
		front=-1;
		rear=-1;
	}
	return val;
}
int peek(){
	if(front==-1){
		printf("Underflow !!\n");
		return -1;
	}else {
		return queue[front];
	}
}
void display(){
	for(int i=front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
	printf("\n");
}