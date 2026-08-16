#include <stdio.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
void push(int data){
    if(top==-1){
        stack[0]=data;
        top++;
    }else{
        stack[++top]=data;
    }
}
int peek(){
    if(top==-1){
        return -1;
    }else{
        return stack[top];
    }
}
int pop(){
    if(top==-1){
        printf("Stack empty !!");
        return -1;
    }else{
        return stack[top--];
    }
}
void display(){
    if(top==-1){
        printf("Stack underflow !!!");
    }else{
        printf("\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
        printf("\n");
    }
}
void main(){
    int choice,data;
    while(1){
        printf("1.PUSH\n2.PEEK\n3.POP\n4.Display\nchoice = ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the data : ");
            scanf("%d",&data);
            push(data);
            break;
            case 2:
            printf("%d\n",peek());
            break;
            case 3:
            printf("%d\n",pop());
            break;
            case 4:
            display();
        }
    }
}