#include <stdio.h>
#include <string.h>
#include "../stack_implementation/stack_linkedlist.h"
char comp(char ch){
	if(ch==')')
		return '(';
	else if(ch==']')
		return '[';
	else if(ch=='}')
		return '{';
}
int brackets(char ch){
	char bracket []="({[";
	for(int i=0;i<strlen(bracket);i++)
		if(ch==bracket[i])
			return 1;
	return 0;
}
int main(){
	char s[25];
	printf("Enter the expression : ");
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]==')' || s[i]==']' || s[i]=='}'){
			if(peek()==-1 || pop()!=comp(s[i])){
				printf("Invalid expression !!\n");
				return -1;
			}
		}else if(brackets(s[i])==1){
			push(s[i]);
		}
	}
	if(peek()!=-1)
		printf("Invalid expression!!\n");
	else 
	    printf("valid expression!!\n");
	return 1;
}