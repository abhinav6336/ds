#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data ;
    struct Node *next;
}Node;
Node *head = NULL;
void push(int data){
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode -> data = data;
    if(head==NULL){
        head = newnode ;
        head -> next = NULL;
    }else{
        newnode -> next = head;
        head = newnode ;
    }
}
int pop(){
    int val;
    if(head==NULL){
        printf("Stack Underflow !!");
        return -1;
    }else{
        Node *temp = head;
        val = temp -> data;
        head = head -> next;
        free(temp);
        return val;
    }
}
int peek(){
    if(head==NULL){
        return -1;
    }else{
        return head -> data;
    }
}
void display(){
    Node *temp = head;
    while(temp!=NULL){
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}
//int main(){
//    int choice,data;
//    while(1){
//        printf("1.PUSH\n2.PEEK\n3.POP\n4.Display\nchoice = ");
//        scanf("%d",&choice);
//        switch(choice){
//            case 1:
//            printf("Enter the data : ");
//            scanf("%d",&data);
//            push(data);
//            break;
 //           case 2:
//            printf("%d\n",peek());
 //           break;
 //           case 3:
///            pop();
//          break;
 //           case 4:
  //          display();
   //     }
   // }
  //      return 0;
//}