#include <stdio.h>
#include "../stack_implementation/stack_linkedlist.h"
int main(){
	int n,arr[25];
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		push(arr[i]);
	}
	for(int i=0;i<n;i++){
		arr[i]=pop();
	}
	printf("Elements after reverse : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}