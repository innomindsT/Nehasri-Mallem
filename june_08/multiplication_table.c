//to print the multiplication table
#include<stdio.h>
int main() {
	int num;
	printf("enter the number :");
	scanf("%d",&num);
	for(int i=1;i<11;i++){
		printf("%d*%d=%d",num,i,num*i);
		printf("\n");
	}
	return 0;
}
